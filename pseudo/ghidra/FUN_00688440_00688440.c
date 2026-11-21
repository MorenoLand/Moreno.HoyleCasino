// FUN_00688440  00688440

void FUN_00688440(HANDLE param_1,LPCSTR param_2)

{
  DWORD nNumberOfBytesToWrite;
  DWORD *lpNumberOfBytesWritten;
  LPOVERLAPPED lpOverlapped;
  CHAR local_7e4 [2004];
  uint local_10;
  DWORD local_c;
  va_list local_8;
  
  local_10 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  local_8 = &stack0x0000000c;
  wvsprintfA(local_7e4,param_2,local_8);
  local_8 = (va_list)0x0;
  lpOverlapped = (LPOVERLAPPED)0x0;
  lpNumberOfBytesWritten = &local_c;
  nNumberOfBytesToWrite = lstrlenA(local_7e4);
  WriteFile(param_1,local_7e4,nNumberOfBytesToWrite,lpNumberOfBytesWritten,lpOverlapped);
  __security_check_cookie(local_10 ^ (uint)&stack0xfffffffc);
  return;
}

