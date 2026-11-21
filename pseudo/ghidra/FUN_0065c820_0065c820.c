// FUN_0065c820  0065c820

void __thiscall FUN_0065c820(int *param_1,char param_2,char param_3,undefined4 param_4,char param_5)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_2 == '\x03') {
    iVar2 = FUN_00663c50();
    if (iVar2 == 0) {
      param_2 = '\x02';
      param_3 = '\0';
    }
    else {
      cVar1 = FUN_00663b50(param_4);
      if (cVar1 == '\0') {
        param_4 = FUN_006639a0(0);
      }
    }
  }
  (**(code **)(*param_1 + 0x8c))(param_2,param_3,param_4);
  if (param_2 == '\x02') {
    *(undefined1 *)((int)param_1 + 0x1c1) = 1;
    if (param_5 != '\0') {
      *(undefined1 *)(param_1 + 0x70) = 1;
      uVar3 = 0x5f;
      FUN_005fb3a0(0);
      FUN_006065d0(uVar3);
      *(undefined1 *)(param_1 + 0x70) = 0;
      FUN_0065cde0(0xffffffff);
    }
    FUN_0065cde0((int)param_3);
  }
  else {
    *(undefined1 *)((int)param_1 + 0x1c1) = 0;
    if (param_5 != '\0') {
      *(undefined1 *)(param_1 + 0x70) = 1;
      uVar3 = 0x60;
      FUN_005fb3a0(0);
      FUN_006065d0(uVar3);
      *(undefined1 *)(param_1 + 0x70) = 0;
      FUN_0065cde0(0xffffffff);
    }
    uVar3 = FUN_006639d0(param_4);
    FUN_0065cde0(uVar3);
  }
  iVar2 = FUN_00663c50();
  if ((iVar2 == 0) && ((char)param_1[0x71] == '\0')) {
    (**(code **)(*param_1 + 0x98))();
    *(undefined1 *)(param_1 + 0x71) = 1;
  }
  return;
}

