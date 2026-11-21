// FUN_005cc300  005cc300

void __thiscall FUN_005cc300(int *param_1,int param_2)

{
  char cVar1;
  
  FUN_005f4f50(param_2);
  cVar1 = FUN_005f56a0(param_2);
  if (cVar1 != '\0') {
    cVar1 = FUN_005cb5b0();
    if (cVar1 != '\0') {
      (**(code **)(*param_1 + 0x18))(param_2);
      *(undefined1 *)(param_2 + 4) = 1;
    }
  }
  return;
}

