// FUN_0043d940  0043d940

void __fastcall FUN_0043d940(int param_1)

{
  char cVar1;
  
  cVar1 = FUN_0043d350();
  if (cVar1 != '\0') {
    *(undefined1 *)(param_1 + 0x188) = 1;
    *(undefined1 *)(DAT_007906f0 + 0x25c) = 1;
    FUN_0043f1b0(*(undefined4 *)(param_1 + 0x17c),*(undefined4 *)(param_1 + 0x1d4),0xffffffff);
    (**(code **)(**(int **)(param_1 + 0x17c) + 8))(0x2b,0);
  }
  return;
}

