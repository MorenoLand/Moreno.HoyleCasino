// FUN_005f6e10  005f6e10

void __thiscall FUN_005f6e10(int *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  
  MoveToXY(param_2,param_3);
  cVar1 = FUN_005f54a0();
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0x74))();
  }
  return;
}

