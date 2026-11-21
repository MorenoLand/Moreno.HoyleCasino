// FUN_006662c0  006662c0

undefined4 FUN_006662c0(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  LPCSTR lpName;
  DWORD DVar3;
  HANDLE local_8;
  
  DAT_016306b4 = param_1;
  FUN_005fc4f0();
  cVar1 = FUN_00665bd0();
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    cVar1 = FUN_00680da0();
    if (cVar1 == '\0') {
      uVar2 = 0;
    }
    else {
      cVar1 = FUN_00680e90();
      if (cVar1 == '\0') {
        uVar2 = 0;
      }
      else {
        cVar1 = FUN_00680f20();
        if (cVar1 == '\0') {
          uVar2 = 0;
        }
        else {
          local_8 = (HANDLE)0x0;
          cVar1 = (**(code **)(*DAT_0162ee84 + 0xa0))();
          if (cVar1 != '\0') {
            lpName = (LPCSTR)(**(code **)(*DAT_0162ee84 + 0x124))();
            local_8 = CreateMutexA((LPSECURITY_ATTRIBUTES)0x0,0,lpName);
            DVar3 = GetLastError();
            if (DVar3 == 0xb7) {
              FUN_00680fd0();
              return 0;
            }
          }
          cVar1 = FUN_006660e0();
          if (cVar1 == '\0') {
            uVar2 = 0;
          }
          else {
            uVar2 = FUN_00680f90();
            if (local_8 != (HANDLE)0x0) {
              CloseHandle(local_8);
            }
            FUN_00680fd0();
          }
        }
      }
    }
  }
  return uVar2;
}

