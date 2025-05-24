#include <iostream>
#include <string>
#include <algorithm>
#include <iomanip>
using namespace std;
class Nhanvien
{
private:
	string hoten, email, chucvu, danhgia;
	double diem;
	int ky_nang_giao_tiep;
	int hieu_suat_cong_viec;
	int thai_do_lam_viec;
	int tuan_thu_quy_dinh;
	int dong_gop_sang_tao;
	int tinh_than_trach_nhiem;
public:
	Nhanvien()
	{
		danhgia = hoten = email = " ";
		chucvu = " ";
		diem = 0;
		ky_nang_giao_tiep = hieu_suat_cong_viec = thai_do_lam_viec = tuan_thu_quy_dinh = dong_gop_sang_tao = tinh_than_trach_nhiem = 0;
	}
	Nhanvien(string Hoten, string Email, string Chucvu, double DIEM, int kynanggiaotiep, int hieusuatcongviec, int thaidolamviec, int tuanthuquydinh,
		int donggopsangtao, int tinhthantrachnhiem, string Danhgia)
	{
		hoten = Hoten;
		email = Email;
		chucvu = Chucvu;
		diem = DIEM;
		danhgia = Danhgia;
		ky_nang_giao_tiep = kynanggiaotiep;
		hieu_suat_cong_viec = hieusuatcongviec;
		thai_do_lam_viec = thaidolamviec;
		tuan_thu_quy_dinh = tuanthuquydinh;
		dong_gop_sang_tao = donggopsangtao;
		tinh_than_trach_nhiem = tinhthantrachnhiem;
	}
	friend istream& operator>>(istream& is, Nhanvien& a)
	{
		is.ignore();
		cout << " hoten: ";
		getline(is, a.hoten);
		cout << " email: ";
		getline(is, a.email);
		return is;
	}
	friend ostream& operator<<(ostream& os, Nhanvien& a)
	{
		os << "; " << a.hoten << "; " << a.email << "; " << a.chucvu << "; co diem: " << a.diem << endl;
		return os;
	}
	friend void xuat(Nhanvien& a)
	{
		cout << "; " << a.hoten << "; " << a.email << "; ";
	}
	string& getHoten()
	{
		return hoten;
	}
	string& getEmail()
	{
		return email;
	}
	string& getChucvu()
	{
		return chucvu;
	}
	double getDiem()
	{
		return diem;
	}
	string getDanhgia()
	{
		return danhgia;
	}
	friend void nhapChucVu(Nhanvien& a)
	{
		cout << " chuc vu : ";
		getline(cin, a.chucvu);
	}
	void trangthaidilam(Nhanvien& a)
	{
		int trangthai;
		cout << " Hom nay co di lam(0) hay nghi(1) : ";
		cin >> trangthai;
		cout << endl;
		if (trangthai == 1)
		{
			int lydo;
			cout << " Co ly do chinh dang khong (co=1;khong=0): ";
			cin >> lydo;
			cout << endl;
			if (lydo == 1)
			{
				cin.ignore();
				string Reason;
				cout << " ly do: ";
				getline(cin, Reason);
			}
			else if (lydo == 0)
			{
				cout << "canh cao lan 1 " << endl;
			}
		}
		else if (trangthai == 0)
		{

		}
	}
	void trangthailamviec(Nhanvien& a)
	{
		// CÁC TIÊN ĐỘ TRONG CÔNG VIỆC :
		// 1. Chưa bắt đầu 
		// 2. Đang tiến hành
		// 3. Đang chờ duyệt
		// 4. Hoàn thành
		// 5. Trễ hạn
		int ngaygiao;
		cout << " ngay giao: ";
		cin >> ngaygiao;
		int thanggiao;
		cout << " thang giao: ";
		cin >> thanggiao;
		int ngayhan;
		cout << "ngay han nop: ";
		cin >> ngayhan;
		int thanghan;
		cout << "thang han nop: ";
		cin >> thanghan;
		int ngaynop;
		cout << " ngay nop: ";
		cin >> ngaynop;
		int thangnop;
		cout << " thang nop: ";
		cin >> thangnop;
		int mucdo;
		cout << " muc do (cao=0;thap=2;trungbinh=1): ";
		cin >> mucdo;
		if (mucdo == 0)
		{
			cout << " muc do cao." << endl;
			ngayhan += 2;  // thêm ngày hạn nộp lên 2 ngày 
			switch (thanghan)
			{
			case 1:
			{
				if (ngayhan > 31)
				{
					ngayhan -= 31;
					thanghan++;
				}
				break;
			}
			case 4:
			{
				if (ngayhan > 30)
				{
					ngayhan -= 30;
					thanghan++;
				}
				break;
			}
			case 2:
			{
				if (ngayhan > 28)
				{
					ngayhan -= 28;
					thanghan++;
				}
				break;
			}
			case 3:
			{
				if (ngayhan > 31)
				{
					ngayhan -= 31;
					thanghan++;
				}
				break;
			}
			case 5:
			{
				if (ngayhan > 31)
				{
					ngayhan -= 31;
					thanghan++;
				}
				break;
			}
			case 6:
			{
				if (ngayhan > 30)
				{
					ngayhan -= 30;
					thanghan++;
				}
				break;
			}
			case 7:
			{
				if (ngayhan > 31)
				{
					ngayhan -= 31;
					thanghan++;
				}
				break;
			}
			case 8:
			{
				if (ngayhan > 30)
				{
					ngayhan -= 30;
					thanghan++;
				}
				break;
			}
			case 9:
			{
				if (ngayhan > 31)
				{
					ngayhan -= 31;
					thanghan++;
				}
				break;
			}
			case 10:
			{
				if (ngayhan > 30)
				{
					ngayhan -= 30;
					thanghan++;
				}
				break;
			}
			case 11:
			{
				if (ngayhan > 31)
				{
					ngayhan -= 31;
					thanghan++;
				}
				break;
			}
			case 12:
			{
				if (ngayhan > 30)
				{
					ngayhan -= 30;
					thanghan++;
				}
				break;
			}
			default:
				ngayhan;
			}
		}
		else if (mucdo == 1 || mucdo == 2)
		{
			if (mucdo == 1)
			{
				cout << " muc do trung binh." << endl;
			}
			else if (mucdo == 2)
			{
				cout << " muc do thap" << endl;
			}
		}
		cout << " ngay han chinh thuc: " << ngayhan << endl;
		cout << " thang han chinh thuc: " << thanghan << endl;
		if (((ngayhan - ngaynop) + (thanghan - thangnop) * 30) > 0)
		{
			cin.ignore();
			cout << "Tien do co 2 loai: dang cho duyet va hoan thanh " << endl;
			string tiendo;
			cout << " tien do lam do an hom nay: ";
			getline(cin, tiendo);
		}
		else if (((ngayhan - ngaynop) + (thanghan - thangnop) * 30) < 0)
		{
			cout << " tien do lam do an hom nay: Tre han .";
		}
		else if (ngaynop == 0 && thangnop == 0)
		{
			cin.ignore();
			cout << "Tien do co 2 loai: chua bat dau va đang tien hanh" << endl;
			string tiendo;
			cout << "tien do lam do an hom nay:  ";
			getline(cin, tiendo);
		}
	}
	void diemdanhgia(Nhanvien& a, int Diem)
	{
		cout << " diem danh gia la: " << Diem << "*" << endl;
		if (Diem == 0)
		{
			a.diem -= 10;
		}
		else if (Diem == 1)
		{
			a.diem -= 5;
		}
		else if (Diem == 2)
		{
			a.diem;
		}
		else if (Diem == 3)
		{
			a.diem += 5;
		}
		else if (Diem == 4)
		{
			a.diem += 10;
		}
		else if (Diem == 5)
		{
			a.diem += 20;
		}
	}
	void diemquanly(Nhanvien& a)
	{
		cout << "ky nang giao tiep : ";
		cin >> a.ky_nang_giao_tiep;
		cout << " hieu suat cong viec: ";
		cin >> a.hieu_suat_cong_viec;
		cout << "thai do lam viec : ";
		cin >> a.thai_do_lam_viec;
		cout << "tuan thu quy dinh: ";
		cin >> a.tuan_thu_quy_dinh;
		cout << " dong gop sang tao: ";
		cin >> a.dong_gop_sang_tao;
		cout << " tinh than trach nhiem: ";
		cin >> a.tinh_than_trach_nhiem;
	}
	void tongdiem(Nhanvien& a)
	{
		a.diem = a.diem + a.hieu_suat_cong_viec * 2 + a.tuan_thu_quy_dinh * 2 + a.ky_nang_giao_tiep + a.dong_gop_sang_tao + a.thai_do_lam_viec + a.tinh_than_trach_nhiem;
	}
	void DanhGia(Nhanvien& a)
	{
		if (a.diem > 90 && a.diem <= 100)
		{
			a.danhgia = "Nhan vien xuat sac. ";
		}
		else if (a.diem > 85 && a.diem <= 90)
		{
			a.danhgia = "Nhan vien gioi. ";
		}
		else if (a.diem > 80 && a.diem <= 85)
		{
			a.danhgia = "Nhan vien kha. ";
		}
		else if (a.diem > 70 && a.diem <= 80)
		{
			a.danhgia = "Nhan vien trung binh. ";
		}
		else
		{
			a.danhgia = "Nhan vien yeu. ";
		}
	}
	void thong_tin(Nhanvien a[100], int M)
	{
		for (int i = 0; i < M; i++)
		{
			if (i == 0)
			{
				a[i].getHoten() = "Dinh Van Manh";
				a[i].getEmail() = "vanmanh@123";
				a[i].getChucvu() = "Kinh doanh, ban hang";
			}
			else if (i == 1)
			{
				a[i].getHoten() = "Van Tien Manh";
				a[i].getEmail() = "tienmanh@123";
				a[i].getChucvu() = "Marketing, quang ba";
			}
			else if (i == 2)
			{
				a[i].getHoten() = "Pham Tan Tai";
				a[i].getEmail() = "tantai@123";
				a[i].getChucvu() = "Tai chinh, ke toan";
			}
		}
	}
};
bool sapxep(Nhanvien& a, Nhanvien& b)
{
	return a.getDiem() > b.getDiem();
}
int main()
{
	cout << " CHAO MUNG DEN VOI DANH SACH QUAN LY NHAN VIEN : " << endl;
	int password = 123;
	double password1;
	double password2 = 1234;
	double password3;
	Nhanvien employes[100];
	int m = 3; //Số nhân viên có sẵn 
	int n = 0;
	cout << " DANG NHAP TK QUAN LY ." << endl;
	while (true)
	{
		cout << "NHAP PASSWORD : ";
		cin >> password1;
		cout << endl;
		bool giongnhau = true;
		if (password != password1)
		{
			giongnhau = false;
		}
		if (giongnhau == true)
		{
			cout << " PASSWORD CHINH XAC ." << endl;
			int chon;
			cout << endl;
			while (true)
			{
				cout << " #-------BANG CHON VAO CAC MUC------- #:" << endl;
				cout << "1. Danh sach nhan vien : " << endl;
				cout << "2. Chuc vu : " << endl;
				cout << "3. Task: Thong ke nhan vien : " << endl;
				cout << "4. Feedback cua khach hang va diem danh gia cua quan ly : " << endl;
				cout << "5. Bang xep hang : " << endl;
				cout << " Chon so :";
				cin >> chon;
				if (chon == 1)
				{
					// Gán thông tin cho 3 nhân viên có sẵn trong công ty .
					employes[99].thong_tin(employes, m);
					// Danh sách  3 nhân viên có sẵn .
					for (int i = 0; i < m; i++)
					{
						cout << "0" << i + 1;
						cout << employes[i];
					}
					// Thêm nhân viên .
					int bam;
					cout << "1. De add nhan vien: ";
					cin >> bam;
					if (bam == 1)
					{
						// Số nhân viên mới .
						cout << " so luong nhan vien moi: ";
						cin >> n;
						for (int i = m; i < (m + n); i++)
						{
							cout << "ma: 0" << i + 1 << endl;
							cin >> employes[i];
						}
					}
					// Xóa nhân viên .
					while (true)
					{
						cin.ignore();
						string ten;
						cout << " Ten nhan vien muon xoa trong cac nhan vien co san: ";
						getline(cin, ten);
						bool find = false;
						for (int i = 0; i < m + n; i++)
						{
							if (employes[i].getHoten() == ten)
							{
								for (int j = i; j < (m + n) - 1; j++)
								{
									employes[j] = employes[j + 1];
								}
								m--;// Giảm số lượng nhân viên 
								find = true;
								break;
							}
						}
						if (!find)
						{
							cout << " Khong tim thay ten can xoa. " << endl;
						}
						int xoatiep;
						cout << "Co xoa tiep khong (co=1 or khong=0): ";
						cin >> xoatiep;
						if (xoatiep == 0)
						{
							break;
						}
					}
					cout << "\nDANH SACH SAU KHI XOA:" << endl;
					for (int i = 0; i < (m + n); i++)
					{
						cout << "0" << i + 1 << employes[i];
					}
					int X;
					cout << " Bam (1) thoat chuong trinh or (0) tiep tuc: ";
					cin >> X;
					if (X == 1)
					{
						break;
					}
					else if (X == 0)
					{

					}
				}
				else if (chon == 2)
				{
					cout << " #====== CAC CHUC VU TRONG CONG TY:" << endl;
					cout << "1. Kinh doanh, ban hang." << endl;
					cout << "2. Marketing,quang ba." << endl;
					cout << "3. Tai chinh, ke toan." << endl;
					cout << "4. Nhan su." << endl;
					cout << "5. Cong nghe thong tin." << endl;
					cout << "6. Cham soc khach hang." << endl;
					cout << endl;
					int suluachon;
					cout << "(1) khi vao muc nay dau tien or (0) khi vao muc nay sau lan dau: ";
					cin >> suluachon;
					if (suluachon == 0)
					{

					}
					else if (suluachon == 1)
					{
						employes[99].thong_tin(employes, m);  // Danh sách nhân viên ban đầu. 
					}
					while (true)
					{
						cin.ignore();
						bool xem_xet = false;
						string find1;
						cout << endl;
						cout << " Chuc vu muon tim: ";
						getline(cin, find1);
						for (int i = 0; i < (m + n); i++)
						{
							if (employes[i].getChucvu() == find1)
							{
								cout << "0" << i + 1;
								cout << employes[i];
								xem_xet = true;
								cout << endl;
								break;
							}
						}
						if (xem_xet == false)
						{
							cout << "Chua co chuc vu nay trong cong ty." << endl;
						}
						cout << endl;
						int kiemtra;
						cout << "Nhan vien moi :co(1) or khong(0): ";
						cin >> kiemtra;
						if (kiemtra == 1)
						{
							cin.ignore();
							for (int i = m; i < (m + n); i++)
							{
								// Nhập chức vụ cho nhân viên mới .
								cout << "ma: 0" << i + 1;
								xuat(employes[i]);
								nhapChucVu(employes[i]);
							}
						}
						else if (kiemtra == 0)
						{

						}
						int X;
						cout << " Bam (1) thoat chuong trinh or (0) tiep tuc: ";
						cin >> X;
						if (X == 1)
						{
							break;
						}
						else if (X == 0)
						{

						}
					}
					int X1;
					cout << " Bam 1:  de thoat tai khoan or 0: de tiep tuc  ";
					cin >> X1;
					if (X1 == 1)
					{
						break;
					}
					else if (X1 == 0)
					{

					}
				}
				else if (chon == 3)
				{
					int suluachon;
					cout << "(1) khi vao muc nay dau tien or (0) khi vao muc nay sau lan dau: ";
					cin >> suluachon;
					if (suluachon == 0)
					{

					}
					else if (suluachon == 1)
					{
						employes[99].thong_tin(employes, m);  // Danh sách nhân viên ban đầu . 
					}
					for (int i = 0; i < m + n; i++)
					{
						cout << "0" << i + 1;
						cout << employes[i];
						cout << endl;
					}
					while (true)
					{
						int choice;
						cout << " click vao so : ";
						cin >> choice;
						for (int i = 0; i < m + n; i++)
						{
							if (choice == i && i < m)
							{
								cout << "0" << i + 1;
								cout << employes[i];
								cout << endl;
								cout << " Duoc giao do an ." << endl;
								employes[i].trangthailamviec(employes[i]);
								employes[i].trangthaidilam(employes[i]);
								break;
							}
							else if (choice == i && i >= m) // i chạy qua các nhân viên mới 
							{
								cout << "0" << i + 1;
								cout << employes[i];
								cout << endl;
								break;
							}
						}
						int X;
						cout << " Bam (1) thoat chuong trinh or (0) tiep tuc: ";
						cin >> X;
						if (X == 1)
						{
							break;
						}
						else if (X == 0)
						{

						}
					}
					int X1;
					cout << " Bam 1: de thoat tai khoan or 0: de tiep tuc  ";
					cin >> X1;
					if (X1 == 1)
					{
						break;
					}
					else if (X1 == 0)
					{

					}
				}
				else if (chon == 4)
				{
					int suluachon;
					cout << "(1) khi vao muc nay dau tien or (0) khi vao muc nay sau lan dau: ";
					cin >> suluachon;
					if (suluachon == 0)
					{

					}
					else if (suluachon == 1)
					{
						employes[99].thong_tin(employes, m);  // Danh sách nhân viên ban đầu . 
					}
					while (true)
					{
						int khachhang;
						int* nhanxet = new int[m];
						for (int i = 0; i < m; i++)
						{
							nhanxet[i] = 0;
						}
						cout << " BAN CO MUON NHAN XET NHAN VIEN TREN CUONG VI KHACH HANG KHONG (co=1 or khong=0):";
						cin >> khachhang;
						if (khachhang == 1)
						{
							while (true)
							{
								for (int i = 0; i < m + n; i++)
								{
									cout << "0" << i + 1;
									cout << employes[i];
								}
								int choice;
								cout << " click vao so : ";
								cin >> choice;
								for (int i = 0; i < m + n; i++)
								{
									if (choice == i && i < m)
									{
										cout << "0" << i + 1;
										cout << employes[i];
										cin.ignore();
										string nhanxet;
										cout << " nhanxet: ";
										getline(cin, nhanxet);
										cout << endl;
										int diemnhanxet;
										cout << " diem danh gia: ";
										cin >> diemnhanxet;
										employes[i].diemdanhgia(employes[i], diemnhanxet);
										nhanxet[i] = 1;
										break;
									}
									else if (choice == i && i >= m) // i chạy qua các nhân viên mới  
									{
										cout << "0" << i + 1;
										cout << employes[i] << "; chua duoc danh gia nhan vien nay." << endl;
										employes[i].getDiem();
									}
								}
								int tieptuc;
								cout << "Ban co muon tiep tuc khong (co=1 or khong=0): ";
								cin >> tieptuc;
								if (tieptuc == 0)
								{
									break;
								}
							}
							for (int i = 0; i < m; i++)
							{
								if (nhanxet[i] == 0)
								{
									employes[i].getDiem();
								}
							}
						}
						else
						{
							for (int i = 0; i < m; i++)
							{
								employes[i].getDiem();
							}
						}
						cout << " BAN LA QUAN LY ." << endl;
						for (int i = 0; i < m; i++)
						{
							cout << "0" << i + 1;
							cout << employes[i];
							cout << endl;
							employes[i].diemquanly(employes[i]);
							cout << endl;
							employes[i].tongdiem(employes[i]);
							cout << endl;
							employes[i].DanhGia(employes[i]);
							cout << "0" << i + 1;
							cout << employes[i] << " : ";
							cout << employes[i].getDanhgia();
							cout << endl;
						}
						cout << endl;
						int X;
						cout << " Bam (1) thoat chuong trinh or (0) tiep tuc: ";
						cin >> X;
						if (X == 1)
						{
							break;
						}
						else if (X == 0)
						{

						}
						delete[] nhanxet;
						nhanxet = nullptr;
					}
					int X1;
					cout << " Bam 1: de thoat tai khoan or 0: de tiep tuc  ";
					cin >> X1;
					if (X1 == 1)
					{
						break;
					}
					else if (X1 == 0)
					{

					}
				}
				else if (chon == 5)
				{
					int suluachon;
					cout << "(1) khi vao muc nay dau tien or (0) khi vao muc nay sau lan dau: ";
					cin >> suluachon;
					if (suluachon == 0)
					{

					}
					else if (suluachon == 1)
					{
						employes[99].thong_tin(employes, m);  // Danh sách nhân viên ban đầu. 
					}
					sort(employes, employes + n + m, sapxep);
					cout << " Danh sach nhan vien sap xep tu cao xuong thap theo diem: " << endl;
					// In tiêu đề bảng.
					cout << left
						<< setw(5) << "STT"
						<< setw(20) << "Ho va ten"
						<< setw(30) << "Chuc vu"
						<< setw(10) << "Diem"
						<< setw(20) << "Danh gia" << endl;
					cout << "----------------------------------------------------------------------------------" << endl;
					for (int i = 0; i < (n + m); i++)
					{
						employes[i].DanhGia(employes[i]);
						cout << setw(5) << (i + 1)
							<< setw(20) << employes[i].getHoten()
							<< setw(30) << employes[i].getChucvu()
							<< setw(10) << employes[i].getDiem()
							<< setw(20) << employes[i].getDanhgia() << endl;
					}
					int X;
					cout << " Bam (1) thoat chuong trinh or (0) tiep tuc: ";
					cin >> X;
					if (X == 1)
					{
						break;
					}
					else if (X == 0)
					{

					}
				}
				else
				{
					cout << " Khong co so nay, vui long nhap lai ." << endl;
				}
			}
			break;
		}
		else
		{
			cout << " Nhap sai password , xin vui long nhap lai. " << endl;
		}
	}

	cout << "DANG NHAP TK NHAN VIEN . " << endl;
	while (true)
	{
		cout << "NHAP PASSWORD : ";
		cin >> password3;
		cout << endl;
		bool giongnhau = true;
		if (password3 != password2)
		{
			giongnhau = false;

		}

		if (giongnhau == true)
		{
			cout << " Password chinh xac. " << endl;
			sort(employes, employes + n + m, sapxep);
			while (true)
			{
				cin.ignore();
				string timten;
				cout << "ten :";
				getline(cin, timten);
				for (int i = 0; i < m + n; i++)
				{
					cout << "0" << i + 1;
					cout << employes[i];

					if (timten == employes[i].getHoten())
					{
						cout << "----##";
					}
					cout << endl;
				}
				int X;
				cout << " Bam 1:  de thoat tai khoan or 0: de tiep tuc  ";
				cin >> X;
				if (X == 1)
				{
					break;
				}
				else if (X == 0)
				{

				}
			}
			break;
		}
		else
		{
			cout << "Nhap sai password , xin vui long nhap lai." << endl;
		}
	}
	return 0;
}

