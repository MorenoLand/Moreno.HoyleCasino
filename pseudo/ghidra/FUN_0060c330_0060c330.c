// FUN_0060c330  0060c330

void __fastcall FUN_0060c330(int *param_1)

{
  if ((char)param_1[0x74] != '\0') {
    *(undefined1 *)(param_1 + 0x74) = 0;
    (**(code **)(*param_1 + 0xac))();
    (**(code **)(*param_1 + 0x74))();
  }
  return;
}

