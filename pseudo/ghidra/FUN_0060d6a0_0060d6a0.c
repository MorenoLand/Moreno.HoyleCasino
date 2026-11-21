// FUN_0060d6a0  0060d6a0

void __fastcall FUN_0060d6a0(int param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x90) != 0) &&
     (iVar1 = memcmp((void *)(param_1 + 0x18),(void *)(param_1 + 0x28),0x10), iVar1 != 0)) {
    PatBlt(*(HDC *)(param_1 + 0x90),*(int *)(param_1 + 0x18),*(int *)(param_1 + 0x1c),
           *(int *)(param_1 + 0x20),*(int *)(param_1 + 0x2c),0x42);
    PatBlt(*(HDC *)(param_1 + 0x90),*(int *)(param_1 + 0x18),*(int *)(param_1 + 0x2c),
           *(int *)(param_1 + 0x28),*(int *)(param_1 + 0x34),0x42);
    PatBlt(*(HDC *)(param_1 + 0x90),*(int *)(param_1 + 0x18),*(int *)(param_1 + 0x34),
           *(int *)(param_1 + 0x20),*(int *)(param_1 + 0x24),0x42);
    PatBlt(*(HDC *)(param_1 + 0x90),*(int *)(param_1 + 0x30),*(int *)(param_1 + 0x2c),
           *(int *)(param_1 + 0x20),*(int *)(param_1 + 0x34),0x42);
  }
  return;
}

