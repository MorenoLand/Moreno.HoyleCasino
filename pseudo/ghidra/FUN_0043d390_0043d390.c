// FUN_0043d390  0043d390

void __fastcall FUN_0043d390(int param_1)

{
  char cVar1;
  
  cVar1 = FUN_0043d350();
  if (cVar1 != '\0') {
    *(undefined1 *)(param_1 + 0x188) = 0;
    FUN_0043f1b0(*(undefined4 *)(param_1 + 0x17c),0x18aa6,*(undefined4 *)(param_1 + 0x1a0),0x18aa7,
                 *(undefined4 *)(param_1 + 0x1a4),0xffffffff);
    (**(code **)(**(int **)(param_1 + 0x17c) + 8))(1,0xf);
    *(undefined1 *)(param_1 + 0x188) = 1;
  }
  return;
}

