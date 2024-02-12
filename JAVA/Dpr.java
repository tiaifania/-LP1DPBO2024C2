//deklarasi kelas/class, huruf pertama harus kapital

import java.util.Set;

public class Dpr {
    private String id;
    private String name;
    private String bidang;
    private String partai;


    //konstruktor
    //versi yang ga ada param
    public Dpr()
    {
        this.id = "";
        this.name = "";
        this.bidang = "";
        this.partai = "";
    }

    //versi yang pake param, kayak nya untuk otomatis input nama dari user
    public Dpr(String id, String name, String bidang, String partai)
    {
        this.id = id;
        this.name = name;
        this.bidang = bidang;
        this.partai = partai;
    }

    public String getId ()
    {
        return this.id;
    }

    public void setId(String id)
    {
        this.id = id;
    }

    public String getName ()
    {
        return this.name;
    }

    public void setName(String name)
    {
        this.name = name;
    }

    public String getBidang ()
    {
        return this.bidang;
    }

    public void setBidang(String bidang)
    {
        this.bidang = bidang;
    }

    public String getPartai ()
    {
        return this.partai;
    }

    public void setPartai(String partai)
    {
        this.partai = partai;
    }

    //method publik/ bisa disebut behaviours

    public void eat()
    {
        System.out.println(this.name + "is eating!");
    }

    public void sleep()
    {
        System.out.println(this.name + "is sleeping!");
    }

    //java ga butuh destruktor kaya cpp
}