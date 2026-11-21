// FUN_00656280  00656280

void __thiscall FUN_00656280(int param_1,int param_2)

{
  char cVar1;
  
  if (((DAT_016306a0 != (int *)0x0) &&
      (cVar1 = (**(code **)(*DAT_016306a0 + 0x50))(param_2), cVar1 == '\0')) &&
     (*(int *)(param_2 + 0x18) == 3)) {
    (**(code **)(**(int **)(param_1 + 0x6c) + 0xb4))(&PTR_006b27f8);
  }
  return;
}

