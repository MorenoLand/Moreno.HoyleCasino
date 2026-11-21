// FUN_0057c410  0057c410

void __thiscall FUN_0057c410(int *param_1,char param_2)

{
  int iVar1;
  int iVar2;
  undefined1 extraout_var;
  
  if (*(char *)(*(int *)(DAT_00793578 + 0x19d0) + param_1[0x74] * 0x224) != '\0') {
    if (param_2 == '\0') {
      FUN_005ee8c0(0,0,0);
      FUN_005ecd00(((1 < param_1[0x74]) - 1 & 0xffffffc8) + 0x67,0xffffffff,
                   CONCAT13(extraout_var,CONCAT12(DAT_0075ee1e,DAT_0075ee1c)));
    }
    else {
      FUN_005ee8c0(0x7d,0xc6,0xee);
    }
    FUN_005eaf00(0x41f);
    (**(code **)(*param_1 + 0x6c))(0x1f5);
    FUN_005f6270();
    iVar1 = (**(code **)(*param_1 + 0x54))();
    iVar1 = (**(code **)(*param_1 + 0x4c))(iVar1 + 4);
    iVar2 = FUN_005f5550();
    (**(code **)(*(int *)param_1[0x75] + 0x44))(iVar1 + -6 + iVar2);
    (**(code **)(*(int *)param_1[0x75] + 0x6c))(0x1f6);
    (**(code **)(*(int *)param_1[0x75] + 0x74))();
  }
  return;
}

