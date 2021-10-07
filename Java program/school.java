//school   (base class)  ---->> schName,schAddress,schPhonenumber,schPrinciple,schStatus,schNonteachingStuf,schTeanher,schAdmission;
//student  -->  school   --->> StsName,stdPhone,stdAddress,stdClass;
//teacher  -->school     ---->> tName,tPhone,tAddress;
//parent  --->student    ----->> pName,pRelation;


import java.util.Scanner;

class school1{
    private String name,address,phonenumber,principleName, statusOfSchool;
    private int noNonteachingStaff,noTeacher;
    private boolean admissionOpen;


    school1(){
        name=null;
        address=null;
        phonenumber=null;
        principleName=null;
        statusOfSchool =null;
        noNonteachingStaff=0;
        noTeacher=0;
        admissionOpen=false;
    }
    school1(String name,String address, String phonenumber, String principleName,String StatusOfSchool,int noNonteachingStaff,int noTeacher,boolean admissionOpen){
        this.name=name;
        this.address=address;
        this.phonenumber=phonenumber;
        this.principleName=principleName;
        this.statusOfSchool =StatusOfSchool;
        this.noNonteachingStaff=noNonteachingStaff;
        this.noTeacher=noTeacher;
        this.admissionOpen=admissionOpen;
    }

    String getName(){
        return name;
    }
    void setName(String n){
        this.name=n;
    }
    String getAddress(){
        return address;
    }
    void setAddress(String a){
        this.address=a;
    }

    String getNumber(){
        return phonenumber;
    }
    void setNumber(String num){
        this.phonenumber=num;
    }


    String getPrincipleName(){
        return principleName;
    }
    void setPrincipleName(String principleName){
        this.principleName=principleName;
    }
    String getStatusOfSchool(){
        return statusOfSchool;
    }
    void setStatusOfSchool(String StatusOfSchool){
        this.statusOfSchool =StatusOfSchool;
    }
    int getnoNonteachingStaff(){
        return noNonteachingStaff;
    }
    void setnoNonteachingStaff(int noNonteachingStaff){
        this.noNonteachingStaff=noNonteachingStaff;
    }

    int getnoTeacher(){
        return noTeacher;
    }
    void setnoTeacher(int noTeacher){
        this.noTeacher=noTeacher;
    }

    boolean getadmissionOpen(){
        return admissionOpen;
    }
    void setAdmissionOpen(boolean admissionOpen){
        this.admissionOpen=admissionOpen;
    }

}

class Student extends school1{
    private String studentName,studentAddress,studentPhone,studentClass;
    Student(){
        studentName=null;
        studentAddress=null;
        studentPhone=null;
        studentClass=null;
    }
    Student(String studentName , String studentAddress , String studentPhone , String studentClass){
        this.studentName=studentName;
        this.studentAddress=studentAddress;
        this.studentPhone=studentPhone;
        this.studentClass=studentClass;
    }
    String getstudentName(){
        return studentName;
    }
    void setstudentName(String studentName){
        this.studentName=studentName;
    }
    String getstudentAddress(){
        return studentAddress;
    }
    void setstudentAddress(String studentAddress){
        this.studentAddress=studentAddress;
    }

    String getstudentPhone(){
        return studentPhone;
    }
    void setstudentPhone(String studentPhone){
        this.studentPhone=studentPhone;
    }

    String getstudentClass(){
        return studentClass;
    }
    void setstudentClass(String studentClass){
        this.studentClass=studentClass;
    }
}

class Teacher extends school1 {
    String teacherName, teacherPhone, teacherAddress;
    Teacher() {
        teacherName = null;
        teacherPhone = null;
        teacherAddress = null;
    }
    Teacher(String teacherName, String teacherPhone, String teacherAddress) {
        this.teacherName = teacherName;
        this.teacherPhone = teacherPhone;
        this.teacherAddress = teacherAddress;
    }
    String getteacherName() {
        return teacherName;
    }

    void setteacherName(String name) {
        this.teacherName = teacherName;
    }

    String getteacherAddress() {
        return teacherAddress;
    }

    void setteacherAddress(String address) {
        this.teacherAddress = teacherAddress;
    }

    String getteacherPhone() {
        return teacherPhone;
    }

    void setteacherPhone(String teacherPhone) {
        this.teacherPhone = teacherPhone;
    }
}
class parent extends Student{
    private String parentName,relation;
    parent(){
        parentName=null;
        relation=null;
    }
    parent(String parentName,String relation){
        this.parentName=parentName;
        this.relation=relation;
    }
    String getParentName(){
        return parentName;
    }
    void setParentName(String parentName){
        this.parentName=parentName;
    }
    String getRelation(){
        return relation;
    }
    void setPhone(String relation){
        this.relation=relation;
    }
}

public class school {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        String user="admin";int pass=12345;
        String flag= null;
        System.out.println("Enter user name : ");
        String uname=sc.next();
        System.out.println("Enter Password");
        int pas=sc.nextInt();
        if(user.equals(uname) && pas==pass){
            System.out.println("Enter School name");
            String scname =sc.next();
            System.out.println("Enter School Address");
            String scAddress =sc.next();
            System.out.println("Enter School phoneNumber");
            String scNumber =sc.next();
            System.out.println("Enter School Principal Name");
            String scPrincipal =sc.next();
            System.out.println("Enter Status of School");
            String scsos=sc.next();
            System.out.println("Enter Number of non technical stuff ");
            int nonts=sc.nextInt();
            System.out.println("Enter Number of non Teacher ");
            int not=sc.nextInt();
            System.out.println("Enter admission open or not ");
            boolean ado=sc.nextBoolean();
            school1 obj=new school1(scname,scAddress,scNumber,scPrincipal,scsos,nonts,not,ado);
            System.out.println("School Name : "+obj.getName());
            System.out.println("School Address : "+obj.getAddress());
            System.out.println("School PhoneNumber : "+obj.getNumber());
            System.out.println( "School PrincipleName : "+obj.getPrincipleName());
            System.out.println("School Status of School : "+obj.getStatusOfSchool());
            System.out.println("School Non Teaching Stuff : "+obj.getnoNonteachingStaff());
            System.out.println("School Teacher : "+obj.getnoTeacher());
            System.out.println("School Get Admission Open : "+obj.getadmissionOpen());
            System.out.println("press 1 for teacher / press 2 for Student / press 3 for parent / press 4 for Admin  ");
            String val=sc.next();
            Teacher obj2=new Teacher();
            switch (val){
                case "1":
                    System.out.println("You are Teacher ");
                    System.out.println("Enter Teacher Name : ");
                    String teacherName =sc.next();
                    System.out.println("Enter Teacher Phone : ");
                    String teacherPhone=sc.next();
                    System.out.println("Enter Teacher Address : ");
                    String teacherAddress =sc.next();

                    obj2.setteacherName(teacherName);
                    obj2.setteacherPhone(teacherPhone);
                    obj2.setteacherAddress(teacherAddress);
                    System.out.println("Teacher Name : "+obj2.getteacherName());
                    System.out.println("Teacher Phone : "+obj2.getteacherPhone());
                    System.out.println("Teacher Address : "+obj2.getteacherAddress());
                    flag="teacher";
                    break;
                case "2":
                    System.out.println("You are Student ");
                    System.out.println("Enter Student name");
                    String studentName =sc.next();
                    System.out.println("Enter Student Address");
                    String studentAddress=sc.next();
                    System.out.println("Enter Student phoneNumber");
                    String studentPhone =sc.next();
                    System.out.println("Enter Student Class");
                    String studentclass =sc.next();
                    Student obj1=new Student(studentName,studentAddress,studentPhone,studentclass);
                    System.out.println("Student Name : "+obj1.getstudentName());
                    System.out.println("Student Address : "+obj1.getstudentAddress());
                    System.out.println("Student phone number : "+obj1.getstudentPhone());
                    System.out.println("Student class : "+obj1.getstudentClass());
                    flag="student";
                    break;
                case "3":
                    System.out.println("You are parent ");
                    System.out.println("Enter Parent Name");
                    String parentName =sc.next();
                    System.out.println("Enter Parent Relation");
                    String parentRelation=sc.next();
                    parent obj3=new parent(parentName,parentRelation);
                    System.out.println("Parent Name : "+obj3.getParentName());
                    System.out.println("Parent Name : "+obj3.getRelation());
                    flag="parent";
                    break;
                case "4":
                    System.out.println("You are Admin ");
                    flag="admin";
                    break;
                default:
                    System.out.println("You chose Wrong option");
            }


                if (flag.equals("admin")){
                    System.out.println("press 1 for Update teacher / press 2 for Update Student / press 3 for Update school ");
                    String valu=sc.next();

                    switch (valu) {
                        case "1":

                            System.out.println("Enter Teacher Name : ");
                            String teacherName =sc.next();
                            System.out.println("Enter Teacher Phone : ");
                            String teacherPhone=sc.next();
                            System.out.println("Enter Teacher Address : ");
                            String teacherAddress =sc.next();
                            Teacher o1=new Teacher();
                            o1.setteacherName(teacherName);
                            o1.setteacherPhone(teacherPhone);
                            o1.setteacherAddress(teacherAddress);
                            System.out.println("Update Teacher Name : "+o1.getteacherName());
                            System.out.println("Update Teacher Phone : "+o1.getteacherPhone());
                            System.out.println("Update Teacher Address : "+o1.getteacherAddress());
                            break;
                        case "2":

                            System.out.println("Enter Student name");
                            String studentName =sc.next();
                            System.out.println("Enter Student Address");
                            String studentAddress=sc.next();
                            System.out.println("Enter Student phoneNumber");
                            String studentPhone =sc.next();
                            System.out.println("Enter Student Class");
                            String studentclass =sc.next();
                            Student o2=new Student();
                            o2.setstudentName(studentName);
                            o2.setstudentAddress(studentAddress);
                            o2.setstudentPhone(studentPhone);
                            o2.setstudentClass(studentclass);
                            System.out.println("Update Student Name : "+o2.getstudentName());
                            System.out.println("Update Student Address : "+o2.getstudentAddress());
                            System.out.println("Update Student phone number : "+o2.getstudentPhone());
                            System.out.println("Update Student class : "+o2.getstudentClass());
                            break;

                        case "3":
                            System.out.println("press 1 for Update School Name / press 2 for Update School Address / press 3 for Update school Phone Number / press 4 for Update school Principal Name / press 5 for Update school Status / press 6 for Update school Number of Non technical stuff / press 7 for Update school Number of teacher / press 8 for Update school Admission open or Not ");
                            String value=sc.next();

                            switch (value) {
                                case "1":
                                    System.out.println("Update School name");
                                    String schname = sc.next();
                                    obj.setName(schname);
                                    System.out.println("Update Name : "+obj.getName());
                                    break;
                                case "2":
                                    System.out.println("Update School Address");
                                    String schAddress = sc.next();
                                    obj.setAddress(schAddress);
                                    System.out.println("Update Address : "+obj.getAddress());
                                    break;
                                case "3":
                                    System.out.println("Update School phoneNumber");
                                    String schNumber = sc.next();
                                    obj.setNumber(schNumber);
                                    System.out.println("Update PhoneNumber : "+obj.getNumber());
                                    break;
                                case "4":
                                    System.out.println("Update School Principal Name");
                                    String scHPrincipal = sc.next();
                                    obj.setPrincipleName(scHPrincipal);
                                    System.out.println( "Update PrincipleName : "+obj.getPrincipleName());
                                    break;
                                case "5":
                                    System.out.println("Update Status of School");
                                    String schsos = sc.next();
                                    obj.setStatusOfSchool(schsos);
                                    System.out.println("Update Status of School : "+obj.getStatusOfSchool());
                                    break;
                                case "6":
                                    System.out.println("Update Number of non technical stuff ");
                                    int schnonts = sc.nextInt();
                                    obj.setnoNonteachingStaff(schnonts);
                                    System.out.println("Update Non Teaching Stuff : "+obj.getnoNonteachingStaff());
                                     break;
                                case "7":
                                    System.out.println("Update Number of non Teacher ");
                                    int snot = sc.nextInt();
                                    obj.setnoTeacher(snot);
                                    System.out.println("Update Teacher : "+obj.getnoTeacher());
                                    break;
                                case "8":
                                    System.out.println("Update admission open or not ");
                                    boolean sado = sc.nextBoolean();
                                    obj.setAdmissionOpen(sado);
                                    System.out.println("Update Get Admission Open : "+obj.getadmissionOpen());
                                    break;
                                default:
                                    System.out.println("wrong input");

                            }

                        default:
                            System.out.println("wrong input");

                    }

                }

            if (flag.equals("teacher")) {
                System.out.println("press 1 for Update teacher / press 2 for Update Student / press 3 for Update school ");
                String v = sc.next();

                switch (v) {
                    case "1":
                        System.out.println("You are Teacher ");
                        System.out.println("Enter Teacher Name : ");
                        String teacherName =sc.next();
                        obj2.setteacherName(teacherName);
                        System.out.println("Update Teacher Name : "+obj2.getteacherName());
                        break;
                    case "2":
                        System.out.println("Enter Teacher Phone : ");
                        String teacherPhone=sc.next();
                        obj2.setteacherPhone(teacherPhone);
                        System.out.println("Teacher Phone : "+obj2.getteacherPhone());
                        break;
                    case "3":
                        System.out.println("Enter Teacher Address : ");
                        String teacherAddress =sc.next();
                        obj2.setteacherAddress(teacherAddress);
                        System.out.println("Teacher Address : "+obj2.getteacherAddress());
                        break;

                }
            }

        }
        else{
            System.out.println("Please Enter correct Username & Password");
        }
    }
}
