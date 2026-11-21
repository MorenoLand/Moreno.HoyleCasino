// FUN_0062d470  0062d470

char __fastcall FUN_0062d470(int param_1)

{
  char cVar1;
  undefined4 local_10;
  int local_c;
  char local_5;
  
  local_5 = '\x01';
  alGetSourcei(*(undefined4 *)(param_1 + 0x2e8),0x1016,&local_c);
  if (1 < local_c) {
    FUN_0062fde0("Need more space in the stream buffer.\n");
  }
  while( true ) {
    if (local_c < 1) {
      if (local_5 != '\0') {
        cVar1 = FUN_0062d3f0();
        if (cVar1 != '\0') {
          FUN_0062fde0("restarting audio stream that ran out\n");
          alSourcePlay(*(undefined4 *)(param_1 + 0x2e8));
          cVar1 = FUN_0062d710();
          if (cVar1 == '\0') {
            return '\0';
          }
        }
      }
      return local_5;
    }
    alSourceUnqueueBuffers(*(undefined4 *)(param_1 + 0x2e8),1,&local_10);
    cVar1 = FUN_0062d710();
    if (cVar1 == '\0') {
      return '\0';
    }
    local_5 = FUN_0062d580(local_10);
    if (local_5 != '\0') {
      alSourceQueueBuffers(*(undefined4 *)(param_1 + 0x2e8),1,&local_10);
    }
    cVar1 = FUN_0062d710();
    if (cVar1 == '\0') break;
    local_c = local_c + -1;
  }
  return '\0';
}

