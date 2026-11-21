// FUN_00600160  00600160

void __fastcall FUN_00600160(int *param_1)

{
  char cVar1;
  
  cVar1 = FUN_00600230();
  if (cVar1 == '\0') {
    *(undefined1 *)(param_1 + 0x77) = 1;
    (**(code **)(*param_1 + 0xec))();
    (**(code **)(*param_1 + 0xfc))();
  }
  return;
}

