import numpy as np
import skfuzzy as fuzz
from matplotlib import pyplot as plt

#masalah: permintaan, persediaan, produksi
#permintaan terbesar = 5000, permintaan terkecil = 1000, step = 100
x_permintaan = np.arange(0, 5001, 100)
#persediaan terbesar = 600, persediaan terkecil = 100, step = 10
x_persediaan = np.arange(0, 601, 10)
#produksi terbesar = 7000, produksi terkecil = 2000, step = 100
x_produksi = np.arange(0, 7001, 100)

# print(x_permintaan)
# print(x_persediaan)
# print(x_produksi)

#membuat fungsi keanggotaan (mf)
permintaan_turun = fuzz.trimf(x_permintaan, [1000, 1000, 5000])
permintaan_naik = fuzz.trimf(x_permintaan, [1000, 5000, 5000])

persediaan_turun = fuzz.trimf(x_persediaan, [100, 100, 600])
persediaan_naik = fuzz.trimf(x_persediaan, [100, 600, 600])
# plt.plot(x_permintaan, permintaan_turun)
# plt.show()

# plt.plot(x_permintaan, permintaan_naik)
# plt.show()

#berapakah produksi jika permintaan = 4000, persediaan = 300
nilai_permintaan = 4000
nilai_persediaan = 300

derajat_permintaan_turun = fuzz.interp_membership(x_permintaan, permintaan_turun, nilai_permintaan)

derajat_permintaan_naik = fuzz.interp_membership(x_permintaan, permintaan_naik, nilai_permintaan)

# plt.plot(nilai_permintaan, derajat_permintaan_turun, marker= '*')
# plt.plot(nilai_permintaan, derajat_permintaan_naik, marker='.')
# plt.show()

derajat_persediaan_turun = fuzz.interp_membership(x_persediaan, persediaan_turun, nilai_persediaan)

derajat_persediaan_naik = fuzz.interp_membership(x_persediaan, persediaan_naik, nilai_persediaan)

# print(derajat_persediaan_turun)
# print(derajat_persediaan_naik)

# print(derajat_permintaan_turun)
# print(derajat_permintaan_naik)

fig = plt.figure(figsize=(6.4 * 2.0, 4.8 * 1.5))

plt.subplot(3, 1, 1)
plt.title("Permintaan (kemasan/hari)")
plt.plot(x_permintaan, permintaan_turun, label="Turun", marker=".")
plt.plot(x_permintaan, permintaan_naik, label="Naik", marker=".")
plt.plot(nilai_permintaan, 0.0, label="Nilai Permintaan", marker="o")
plt.plot(nilai_permintaan, derajat_permintaan_turun, marker= 'D', label="Derajat Turun")
plt.plot(nilai_permintaan, derajat_permintaan_naik, marker='D', label="Derajat Naik")
plt.axis([0,5000,0,1])
plt.legend(loc="upper left")

plt.subplot(3, 1, 2)
plt.title("Persediaan (kemasan/hari)")
plt.plot(x_persediaan, persediaan_turun, label="Turun", marker=".")
plt.plot(x_persediaan, persediaan_naik, label="Naik", marker=".")
plt.plot(nilai_persediaan, 0.0, label="Nilai Persediaan", marker="o")
plt.plot(nilai_persediaan, derajat_persediaan_turun, label="Derajat Turun", marker="D")
plt.plot(nilai_persediaan, derajat_persediaan_naik, label="Derajat Naik", marker="D")
plt.axis([0, 600, 0, 1])
plt.legend(loc="upper left")

#menentukan alpha predikat dari setiap rule
#rule 1, IF permintaan TURUN and persediaan BANYAK THEN produksi barang = permintaan - persediaan
apred_1 = np.fmin(derajat_permintaan_turun, derajat_persediaan_naik)
z1 = nilai_permintaan - nilai_persediaan

#rule 2, IF permintaan TURUN and persediaan SEDIKIT THEN produksi barang = permintaan
apred_2 = np.fmin(derajat_permintaan_turun, derajat_persediaan_turun)
z2 = nilai_permintaan

#rule 3, IF permintaan NAIK and persediaan BANYAK THEN produksi barang = permintaan
apred_3 = np.fmin(derajat_permintaan_naik, derajat_persediaan_naik)
z3 = nilai_permintaan

#rule 4, IF permintaan NAIK and persediaan SEDIKIT THEN produksi barang = 1.25*permintaan - persediaan
apred_4 = np.fmin(derajat_permintaan_naik, derajat_persediaan_turun)
z4 = 1.25 * nilai_permintaan - nilai_persediaan
print(apred_1)
print(apred_2)
print(apred_3)
print(apred_4)

print(z1)
print(z2)
print(z3)
print(z4)

z = (apred_1 * z1 + apred_2 * z2 + apred_3 * z3 + apred_4 * z4) / (apred_1 + apred_2 + apred_3 + apred_4)

print(z)

plt.subplot(3, 1, 3)
plt.title("Produksi")
plt.plot(z1, apred_1, label="z1", marker=".")
plt.xlim(3000, 5000)
plt.ylim(0, 1)
plt.vlines(z1, 0.0, apred_1)
plt.plot(z2, apred_2, label="z2", marker=".")
plt.vlines(z2, 0.0, apred_2)
plt.plot(z3, apred_3, label="z3", marker=".")
plt.vlines(z3, 0.0, apred_3)
plt.plot(z4, apred_4, label="z4", marker=".")
plt.vlines(z4, 0.0, apred_4)
z_apred = ((apred_1 + apred_2 + apred_3 + apred_4) / 4)
plt.plot(z, z_apred, label="z final", marker="o")
plt.vlines(z, 0.0, z_apred)
plt.legend(loc="upper left")

plt.subplots_adjust(wspace=0.5, hspace=0.5)

plt.show()











