// FUN_005d7f40  005d7f40

void __thiscall FUN_005d7f40(int param_1,int param_2)

{
  char cVar1;
  DWORD DVar2;
  int iVar3;
  
  if (*(int *)(param_2 + 0x18) != 3) {
    DVar2 = GetTickCount();
    *(DWORD *)(param_1 + 0x60) = DVar2;
  }
  if ((((*(int *)(param_2 + 0x18) == 1) || (*(int *)(param_2 + 0x18) == 4)) && (DAT_00793578 != 0))
     && (*(char *)(DAT_00793578 + 0x1bd) != '\0')) {
    FUN_0057c240();
  }
  if (*(int *)(param_2 + 0x18) == 4) {
    iVar3 = tolower((int)*(char *)(param_2 + 0x14));
    if ((iVar3 == 0x6c) && (*(char *)(param_2 + 4) == '\0')) {
      iVar3 = FUN_005f3fe0();
      if (iVar3 == 0) {
        iVar3 = FUN_005f2a60(0x1399,0);
        if (iVar3 != 0) {
          FUN_005f2a60(0x1399,0);
          cVar1 = FUN_006026d0();
          if (cVar1 != '\0') {
            FUN_005dc1c0();
          }
        }
      }
    }
  }
  FUN_00650360(param_2);
  return;
}

