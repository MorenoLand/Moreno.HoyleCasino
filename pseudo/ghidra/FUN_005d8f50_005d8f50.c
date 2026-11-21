// FUN_005d8f50  005d8f50

undefined4 __thiscall FUN_005d8f50(int *param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x268))();
  if (cVar1 == '\0') {
    FUN_005d9180(param_2,0);
  }
  else {
    FUN_005d8f90();
  }
  return 1;
}

