// FUN_0064b540  0064b540

void __fastcall FUN_0064b540(int param_1)

{
  char cVar1;
  int iVar2;
  DWORD DVar3;
  uint uVar4;
  
  FUN_005f5cf0();
  cVar1 = (**(code **)(*DAT_0162ee84 + 0x33c))(0xffffffff);
  if ((cVar1 != '\0') && (cVar1 = FUN_005f54c0(), cVar1 == '\0')) {
    iVar2 = (**(code **)(*DAT_0162ee80 + 0x1ec))();
    if (iVar2 == *(int *)(param_1 + 0x184)) {
      DVar3 = GetTickCount();
      iVar2 = *(int *)(param_1 + 0x1a4);
      uVar4 = (**(code **)(*DAT_0162ee84 + 0x150))();
      if (uVar4 <= DVar3 - iVar2) {
        *(DWORD *)(param_1 + 0x1a4) = DVar3;
        *(char *)(param_1 + 0x188) = '\x01' - (*(char *)(param_1 + 0x188) != '\0');
        FUN_0064afa0(0);
      }
    }
    else if (*(char *)(param_1 + 0x188) != '\0') {
      *(undefined1 *)(param_1 + 0x188) = 0;
      FUN_0064afa0(0);
    }
  }
  return;
}

