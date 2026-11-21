// FUN_005e4980  005e4980

void __thiscall FUN_005e4980(int param_1,int param_2)

{
  char cVar1;
  
  cVar1 = FUN_00631420();
  if (cVar1 != '\0') {
    FUN_005d7f40(param_2);
  }
  if (DAT_00794909 == '\0') {
    FUN_005d7f40(param_2);
  }
  else {
    if ((*(int *)(param_2 + 0x18) == 1) || (*(int *)(param_2 + 0x18) == 4)) {
      (**(code **)(**(int **)(param_1 + 4) + 8))(0xb,0);
    }
    *(undefined1 *)(param_2 + 4) = 1;
  }
  return;
}

