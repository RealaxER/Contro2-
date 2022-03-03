//============================ phần 1 ==================
//1. C: các hàm cấp phát nằm ở thư viện nào ?
//2. C : nguyên mẫu hàm của các hàm cấp phát
//3. C : ứng dụng : lời gọi hàm
//4 : C : cơ chế hoạt động của từng hàm ?
//5 : C++ : cơ chế hoạt động của toán tử new
//6 : Nhận xét hàm realloc và new, giống và khác nhau ?
//
// ========================= Loi Giai =================
//  Câu 1  : Thư viện cấp phát bộ nhớ C nằm ở thư viện < stdlib.h >
// 
// Câu 2  : Nguyên mẫu hàm của hàm cấp phát luôn là kiểu void và tiếp theo là kiểu dữ liệu và 
// các n số lượng vùng nhớ , dùng kiểu void để ta có thể ép kiểu cho nó sau này 
// vì máy tính không thể biết ta cần kiểu dữ liệu nào;
// +void* malloc(int size);
//+void* calloc(int count, int size);
//+void* realloc(void* pointer, int size);
// 
// Câu 3 : 
// +int* p = (int *)malloc(sizeof(int));
// 
// +int* p = calloc(n, sizeof(int));
// 
// +int* p = realloc(int* p, sizeof(int)) :
// 
// Câu 4 
// 
// +Hàm Malloc: yêu cầu cấp phát n vùng nhớ có size byte bên heap cùng với kdl của con trỏ
// giá trị mặc định là rác 
// 
// +Hàm calloc yêu cầu cấp phát n vùng nhớ với mỗi vùng là size byte giá trị mặc định là 0 
// 
//+ Hàm realloc : 2 cơ chế , truyền vào pointer 
// - Nếu pointer chưa trỏ đi đâu thì (Null) : => Câp phát một vùng nhớ mới ( Là malloc ) ;
// - Nếu pointer đã cấp phát vùng nhớ : => Dựa trên vùng nhớ hiện tại để mở rộng và thu hẹp 
// Rồi sau có cấp phát sire byte cùng với kdl;
// 
// 
//		Câu 5:C++: cơ chế hoạt động của toán tử new
//		int* p = new int[n];
//		Chương trình sẽ  trả về cho con trỏ p là n vùng nhớ với kiểu dữ liệu là int
// 
// Câu 6: Nhận xét hàm realloc và new , giống và khác nhau ?
// - Đều có thể cấp phát một vùng nhớ với kiểu dữ liệu giống nhau 
// Khác chính là real có thể mở rộng và thu hẹp vùng nhớ cso sẵn còn new chỉ cso cấp phát
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
//


