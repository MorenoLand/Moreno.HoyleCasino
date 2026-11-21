// FUN_005d4b50  005d4b50

void __thiscall FUN_005d4b50(int *param_1,int param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x84))(param_2);
  if (cVar1 != '\0') {
    *(undefined1 *)(param_2 + 4) = 1;
  }
  return;
}

