// FUN_0064d330  0064d330

void __fastcall FUN_0064d330(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = (**(code **)(*DAT_0162ee84 + 0x33c))(0xffffffff);
  if ((cVar1 != '\0') && (cVar1 = (**(code **)(*param_1 + 0x110))(), cVar1 == '\0')) {
    uVar2 = (**(code **)(*DAT_0162ee84 + 0x3a0))();
    FUN_005f1ad0(uVar2);
  }
  return;
}

