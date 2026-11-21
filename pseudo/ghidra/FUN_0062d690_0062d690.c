// FUN_0062d690  0062d690

undefined4 __fastcall FUN_0062d690(int param_1)

{
  char cVar1;
  undefined1 local_c [4];
  int local_8;
  
  alGetSourcei(*(undefined4 *)(param_1 + 0x2e8),0x1015,&local_8);
  do {
    if (local_8 == 0) {
      local_8 = local_8 + -1;
      alSourcei(*(undefined4 *)(param_1 + 0x2e8),0x1009,0);
      return 1;
    }
    local_8 = local_8 + -1;
    alSourceUnqueueBuffers(*(undefined4 *)(param_1 + 0x2e8),1,local_c);
    cVar1 = FUN_0062d710();
  } while (cVar1 != '\0');
  return 0;
}

