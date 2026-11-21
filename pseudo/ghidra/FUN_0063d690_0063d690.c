// FUN_0063d690  0063d690

void __thiscall FUN_0063d690(int param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  if ((param_2 < 0x186ec) || (0x1870c < param_2)) {
    if (param_2 == 0x186eb) {
      (**(code **)(*DAT_0162ee80 + 0x16c))(0,0,0xffffffff,0xffffffff,0);
    }
    else {
      (**(code **)(*DAT_0162ee80 + 0xdc))(param_1,0x32,param_2,param_3);
    }
  }
  else {
    uVar2 = (**(code **)(*DAT_0162ee84 + 0x3b0))(param_2);
    cVar1 = FUN_0063e000(uVar2);
    if (cVar1 != '\0') {
      puVar3 = (undefined4 *)FUN_0063aac0();
      *puVar3 = 1;
      FUN_0063b490(uVar2);
      strcpy((char *)(*(int *)(*(int *)(param_1 + 0x1bc) + *(int *)(param_1 + 0x1c4) * 4) + 0x10),
             (char *)&PTR_006b27f8);
      FUN_0063c620();
    }
  }
  return;
}

