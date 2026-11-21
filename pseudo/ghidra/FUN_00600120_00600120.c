// FUN_00600120  00600120

void __fastcall FUN_00600120(int *param_1)

{
  char cVar1;
  
  cVar1 = FUN_00600230();
  if (cVar1 == '\0') {
    (**(code **)(*param_1 + 0xf4))();
  }
  else {
    (**(code **)(*param_1 + 0xf8))();
  }
  return;
}

