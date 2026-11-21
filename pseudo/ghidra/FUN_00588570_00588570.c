// FUN_00588570  00588570

void __thiscall FUN_00588570(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_006a6e4e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  switch(param_2) {
  case 0x30dfbd:
  case 0x30dfbe:
  case 0x30dfbf:
    FUN_0058a690();
    FUN_00583900();
    break;
  case 0x30dfc0:
    cVar1 = FUN_00585eb0(DAT_00781870 ^ (uint)&stack0xfffffffc);
    if (cVar1 != '\0') {
      iStack_18 = *(int *)(param_1 + 0x3be4 + *(int *)(param_1 + 0x3c08) * 4) + -1;
      if (iStack_18 < 0) {
        iStack_18 = 0;
      }
      FUN_0058dfb0(iStack_18);
    }
    iVar2 = FUN_00588a80();
    if ((iVar2 < 1) || (100 < iVar2)) {
      FUN_005e9f20(&DAT_006b2b64,"..\\Casino\\kenoticketdialog.cpp",0x2da);
      pvVar3 = operator_new(0x1d0);
      uStack_8 = 1;
      if (pvVar3 == (void *)0x0) {
        uStack_38 = 0;
      }
      else {
        uStack_38 = FUN_00582780(1);
      }
      *(undefined4 *)(param_1 + 0x3c0c) = uStack_38;
    }
    else {
      pvVar3 = operator_new(0x1d0);
      uStack_8 = 0;
      if (pvVar3 == (void *)0x0) {
        uStack_34 = 0;
      }
      else {
        uStack_34 = FUN_00582780(iVar2);
      }
      *(undefined4 *)(param_1 + 0x3c0c) = uStack_34;
    }
    break;
  case 0x30dfc1:
    FUN_00585b00(0);
    break;
  case 0x30dfc2:
    FUN_00585b00(1);
    break;
  case 0x30dfc3:
    FUN_00585b00(2);
    break;
  case 0x30dfc4:
    FUN_00585b00(3);
    break;
  case 0x30dfc5:
    FUN_00585b00(4);
    break;
  case 0x30dfc6:
    FUN_00585b00(5);
    break;
  case 0x30dfc7:
    FUN_00585b00(6);
  }
  ExceptionList = local_10;
  return;
}

