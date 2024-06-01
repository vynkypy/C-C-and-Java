// class Marvellous
// {
//     synchronized public void Display(int No)
//     {   try
//         {
//             int i = 0;
//             for(i = 1; i < 10; i++)
//             {
//                 System.out.println(i*No);
//                 Thread.sleep(1000);

//             }
//         }
//         catch(Exception obj)
//         {}
//     }   
// }

// class Demo extends Thread
// {
//     public Marvellous obj;

//     public Demo(Marvellous ref)
//     {
//         this.obj = ref;
//     }
//     public void run()
//     {
//         // Marvellous mobj = new Marvellous();
//         mobj.Display(5);
 
//     }
// }

// class Hello extends Thread
// {
//     public Marvellous obj;

//     public Hello(Marvellous ref)
//     {
//         this.obj = ref;
//     }

//     public void run()
//     {
//         // Marvellous mobj = new Marvellous();
//         mobj.Display(2);

//     }
// }

// class Multi10
// {
//     public static void main(String ag[])
//     {   
//         Marvellous mobj = new Marvellous();
//         Demo dobj = new Demo(mobj);
//         Hello hobj = new Hello(mobj);

//         dobj.start();
//         hobj.start();

//     }
// }

class Marvellous {
    synchronized public void Display(int No) {
        try {
            int i = 0;
            for (i = 1; i <= 10; i++) {
                System.out.println(i * No);
                Thread.sleep(1000);
            }
        } catch (Exception obj) {
        }
    }
}

class Demo extends Thread {
    public Marvellous obj;

    public Demo(Marvellous ref) {
        this.obj = ref;
    }

    public void run() {
        obj.Display(5);
        obj.Display(6);
        obj.Display(7);
        obj.Display(8);
    }
}

class Hello extends Thread {
    public Marvellous obj;

    public Hello(Marvellous ref) {
        this.obj = ref;
    }

    public void run() {
        obj.Display(2);
    }
}

class Multi10 {
    public static void main(String ag[]) 
    {
        Marvellous mobj = new Marvellous();
        Demo dobj = new Demo(mobj);
        Hello hobj = new Hello(mobj);

        hobj.start();
        dobj.start();

    }
}
