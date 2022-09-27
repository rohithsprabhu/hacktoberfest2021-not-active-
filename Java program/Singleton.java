class Singleton
{
    private static Singleton ob;
    private Singleton() {}
 
    public static Singleton getInstance()
    {
        if (ob==null)
            ob = new Singleton();
        return ob;
    }
}
