// FUN_00625350  00625350

undefined4 __thiscall
FUN_00625350(int *param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
            undefined4 param_5)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 local_1c [4];
  undefined1 local_c [4];
  undefined1 local_8 [4];
  
  if (param_3 == (undefined4 *)0x0) {
    memset(local_1c,0,0x10);
    param_3 = local_1c;
  }
  cVar1 = (**(code **)(*param_1 + 0x20))(param_2,param_3,param_4);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    cVar1 = (**(code **)(*param_1 + 0x24))(param_3,param_5);
    if (cVar1 == '\0') {
      uVar2 = 0;
    }
    else {
      (**(code **)(*param_1 + 0x28))(local_8,local_c);
      uVar2 = FUN_00686cc0();
      *param_3 = uVar2;
      uVar2 = FUN_00686cc0();
      param_3[2] = uVar2;
      uVar2 = FUN_00686cc0();
      param_3[1] = uVar2;
      uVar2 = FUN_00686cc0();
      param_3[3] = uVar2;
      uVar2 = 1;
    }
  }
  return uVar2;
}

