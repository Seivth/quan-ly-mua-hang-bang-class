#include <bits/stdc++.h>
using namespace std;

class hang
{
public:
    string name;
    int sl;
    int gia;
    int tong;
    int stt;
    hang()
    {
        stt = 0;
        name = "rong";
        sl = 0;
        gia = 0;
        tong = 0;
    }
    void nhap()
    {

        cout << "TAO SP" << '\n';
        cout << "Nhap Name: ";
        cin.ignore();
        getline(cin, name);
        fflush(stdin);//nhap du lieu tu ban phim

        cout << "Nhap SL: ";
        cin >> sl;

        cout << "Nhap gia: ";
        cin >> gia;
        cout << "----------------------------" << endl;
    }
    void xuat()
    {
        cout << "STT: " << stt << '\n';
        cout << "Name: " << name << '\n';
        cout << "SL: " << sl << '\n';
        cout << "Gia: " << gia << '\n';
        tong = sl * gia;
        cout << "Tong gia tri: " << tong << '\n';
        cout << "----------------------------" << endl;
    }

    void nhapstt(int m)
    {
        this->stt = m;
    }
    void reset()
    {
        name = "rong";
        sl = 0;
        gia = 0;
        tong = 0;
    }
};

int main()
{

    //========================
    int m;
    hang h[10000];
    cout << "NHAP SO LUONG O NHO: ";
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        h[i].nhapstt(i + 1);
    }
    //=====================================
    int z = 0, z1 = 0;
    string faketen;
    int slmn, sttx;
    int kt = 0;
    int dung = 0;
    int max;
    //===================================
    int thoat = 0;
    int chon;
    while (thoat == 0)
    {
        cout << "============MENU===========" << '\n';
        cout << "1.HIEN SP" << '\n';
        cout << "2.NHAP SP" << '\n';
        cout << "3.XOA SP" << '\n';
        cout << "4.TIM SP" << '\n';
        cout << "5.SP GIA CAO NHAT" << '\n';
        cout << "6.EXIT" << '\n';
        cout << "NHAP LUA CHON(1-6): ";
        cin >> chon;
        switch (chon)
        {
        case 1:
            z = 0;
            for (int i = 0; i < m; i++)
            {
                if (h[i].sl != 0)
                {
                    z++;
                }
            }
            if (z != 0)
            {
                cout << "==========DANH SACH SP==========" << '\n';
                for (int i = 0; i < m; i++)
                {
                    if (h[i].sl != 0)
                    {
                        h[i].xuat();
                    }
                }
            }
            if (z == 0)
            {
                cout << "CHUA CO SP" << '\n';
            }

            break;
        case 2:
            slmn = 0;
            dung = 0;
            kt = 0;
            for (int i = 0; i < m; i++)
            {
                if (h[i].sl == 0)
                {
                    kt++;
                }
            }
            cout << "NHAP SO LUONG HANG: ";
            cin >> slmn;
            cout << slmn;

            if (slmn > kt)
            {
                cout << "BO NHO KO DU" << '\n';
            }
            else
            {
                cout << "========NHAP SP===========" << '\n';
                for (int i = 0; i < m; i++)
                {
                    if (h[i].sl == 0)
                    {
                        h[i].nhap();
                        dung++;
                    }
                    if (dung == slmn)
                    {
                        break;
                    }
                }
            }
            break;
        case 3:
            sttx = 0;
            kt = 0;
            cout << "NHAP STT MUON XOA: ";
            cin >> sttx;
            for (int i = 0; i < m; i++)
            {
                if (h[i].stt == sttx)
                {
                    h[i].reset();
                    kt = 1;
                }
            }
            if (kt = 1)
            {
                cout << "DA XOA" << '\n';
            }
            if (kt = 0)
            {
                cout << "KT LAI." << '\n';
            }
            break;
        case 4:
            kt = 0;
            cout << "NHAP TEN SP CAN TIM: ";
            cin.ignore();
            getline(cin, faketen);
            fflush(stdin);
            for (int i = 0; i < m; i++)
            {
                if (h[i].name == faketen)
                {
                    h[i].xuat();
                    kt = 1;
                }
            }
            if (kt == 0)

            {
                cout << "KT LAI TEN SP" << '\n';
            }
            break;
        case 5:
            max = 0;
            z1 = 0;
            for (int i = 0; i < m; i++)
            {
                if (h[i].gia > max)
                {
                    max = h[i].gia;
                    z1++;
                }
            }
            if (z1 != 0)
            {
                cout << "=========SP GIA CAO NHAT======" << '\n';
                for (int i = 0; i < m; i++)
                {
                    if (h[i].gia == max)
                    {
                        h[i].xuat();
                    }
                }
            }
            if (z1 == 0)
            {
                cout << "CHUA CO SP" << '\n';
            }
            break;
        case 6:
        	cout<<"Exiting..."<<endl;
            exit(1);

        default:
            cout << "NHAP SAI. NHAP LAI" << '\n';
            break;
        }
    }

    return 0;
}
