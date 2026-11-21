// FUN_0043d730  0043d730

void __fastcall FUN_0043d730(int param_1)

{
  char cVar1;
  
  cVar1 = FUN_0043d350();
  if (cVar1 != '\0') {
    *(undefined1 *)(param_1 + 0x188) = 1;
    FUN_0043f1b0(*(undefined4 *)(param_1 + 0x17c),*(undefined4 *)(param_1 + 0x1e0),0xffffffff);
    (**(code **)(**(int **)(param_1 + 0x17c) + 8))(0x22,0);
  }
  return;
}

