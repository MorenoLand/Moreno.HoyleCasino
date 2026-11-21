// FUN_00663a30  00663a30

void __fastcall FUN_00663a30(int param_1)

{
  char cVar1;
  intptr_t _FindHandle;
  int iVar2;
  _finddata64i32_t local_534;
  char local_40c [1028];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  *(undefined1 *)(param_1 + 0x14) = 0;
  sprintf(local_40c,"%s%s%s",&DAT_00795fc0,&DAT_006d61f8,"*.fac");
  FUN_006635e0();
  _FindHandle = _findfirst64i32(local_40c,&local_534);
  if (_FindHandle != -1) {
    if ((local_534.size == 0x4c) && (cVar1 = FUN_00663650(local_534.name), cVar1 == '\0')) {
      *(undefined1 *)(param_1 + 0x14) = 1;
    }
    while (iVar2 = _findnext64i32(_FindHandle,&local_534), iVar2 == 0) {
      if ((local_534.size == 0x4c) && (cVar1 = FUN_00663650(local_534.name), cVar1 == '\0')) {
        *(undefined1 *)(param_1 + 0x14) = 1;
      }
    }
    _findclose(_FindHandle);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

