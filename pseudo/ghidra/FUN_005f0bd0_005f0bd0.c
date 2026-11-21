// FUN_005f0bd0  005f0bd0

void __thiscall FUN_005f0bd0(int *param_1,undefined1 param_2)

{
  char cVar1;
  
  if (*(char *)((int)param_1 + 0x9e) != '\0') {
    *(undefined1 *)((int)param_1 + 0x9f) = param_2;
    cVar1 = (**(code **)(*param_1 + 0xc0))();
    if (cVar1 != '\0') {
      (**(code **)(*param_1 + 0xac))();
    }
  }
  return;
}

