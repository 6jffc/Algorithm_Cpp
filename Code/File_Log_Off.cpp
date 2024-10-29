#include<iostream>
#include <windows.h>

int main(int argc, char *argv[]) {
    // Chọn hành động: log off, tắt máy hoặc khởi động lại
    int uFlags = EWX_POWEROFF; // Có thể thay đổi thành EWX_POWEROFF hoặc EWX_REBOOT
    int dwReason = 0; // Nguyên nhân kết thúc hệ thống (có thể thay đổi tùy nhu cầu)

    // Thực hiện thoát khỏi Windows
    if (!ExitWindowsEx(uFlags, dwReason)) {
        // Nếu không thành công, in ra thông báo lỗi
        DWORD error = GetLastError();
         std::cout << "Lỗi khi thoát khỏi Windows: " << error << std::endl;
        return 1; // Trả về mã lỗi
    }

    return 0; // Trả về 0 khi thành công
}

