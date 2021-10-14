package com.company;

import java.util.Scanner;
class Rotation
{
    String str1,str2,str3;
    public Rotation(String str1,String str2)
    {
        this.str1=str1;
        this.str2=str2;
 }
    public void method(String str1,String str2)
{
    str3=str1+str1;
    if(str1.length()!=str2.length())
    {
        System.out.println("length issuye");
    }
    else if(str3.contains(str2))
    {
        System.out.println("yoyo matched");
    }
    else
    {
        System.out.println("nope");
    }
}
}
public class Question41 {
    public static void main(String[] args) {
        String str1="avajava";//avajavajavaava//but not keep+peek
        String str2="javaava";
        Rotation ob=new Rotation(str1,str2);
        ob.method(str1,str2);
    }
}
