// FUN_0060c300  0060c300

void __fastcall FUN_0060c300(int *param_1)

{
  if ((char)param_1[0x74] == '\0') {
    *(undefined1 *)(param_1 + 0x74) = 1;
    (**(code **)(*param_1 + 0x74))();
  }
  return;
}

