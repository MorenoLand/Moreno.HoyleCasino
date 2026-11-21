// FUN_005eaf60  005eaf60

void __thiscall FUN_005eaf60(int param_1,char *param_2)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x4c) = 0;
  iVar1 = strcmp(param_2,(char *)(param_1 + 0x50));
  if (iVar1 != 0) {
    strcpy((char *)(param_1 + 0x50),param_2);
    if (*(int *)(param_1 + 0x28) != 0) {
      FUN_005eacd0();
    }
  }
  return;
}

