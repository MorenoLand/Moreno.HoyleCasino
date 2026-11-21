// FUN_004839e0  004839e0

void __thiscall FUN_004839e0(undefined4 param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = FUN_00481260(param_1,0);
  if (iVar2 == 0) {
    (**(code **)(*param_2 + 0x1c))(0);
  }
  else {
    cVar1 = FUN_004c61b0();
    if (cVar1 == '\0') {
      FUN_004cd5a0(param_2);
    }
    else {
      iVar2 = FUN_0047cce0();
      if (iVar2 == 0) {
        (**(code **)(*param_2 + 0x1c))(0);
      }
      else {
        FUN_004cd5c0(param_2);
      }
    }
  }
  return;
}

