// FUN_005bfc80  005bfc80

void __fastcall FUN_005bfc80(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_005fc360();
  if (iVar1 == 0) {
    (**(code **)(*param_1 + 4))(1);
  }
  else if (iVar1 == 1) {
    FUN_005bfbc0(param_1[9]);
    (**(code **)(*param_1 + 4))(2);
  }
  return;
}

