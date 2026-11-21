// FUN_0065c560  0065c560

void __thiscall FUN_0065c560(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (((*(char *)(param_1 + 0x1c0) == '\0') && (0x5e < param_2)) && (param_2 < 0x61)) {
    FUN_005fb3a0(0);
    iVar1 = FUN_00606570();
    if (param_2 == iVar1) {
      FUN_0065c300();
      FUN_0065cde0(0xffffffff);
      if (param_2 == 0x5f) {
        FUN_0065c820(2,*(undefined1 *)(param_1 + 0x1c3),&PTR_006b27f8,0);
      }
      else if ((*(int *)(param_1 + 0x1bc) == 0) || (iVar1 = FUN_00663c50(), iVar1 != 0)) {
        uVar3 = 0;
        uVar2 = FUN_006639a0((int)*(char *)(param_1 + 0x1c2));
        FUN_0065c820(3,0,uVar2,uVar3);
      }
      else {
        FUN_005f87d0();
        FUN_0064f470(0);
      }
    }
  }
  return;
}

