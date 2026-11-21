// FUN_0062d310  0062d310

undefined4 __fastcall FUN_0062d310(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_0062d3b0();
  if (cVar1 == '\0') {
    cVar1 = FUN_0062d580(*(undefined4 *)(param_1 + 0x2e0));
    if (cVar1 == '\0') {
      uVar2 = 0;
    }
    else {
      cVar1 = FUN_0062d580(*(undefined4 *)(param_1 + 0x2e4));
      if (cVar1 == '\0') {
        uVar2 = 0;
      }
      else {
        alSourceQueueBuffers(*(undefined4 *)(param_1 + 0x2e8),2,param_1 + 0x2e0);
        alSourcePlay(*(undefined4 *)(param_1 + 0x2e8));
        cVar1 = FUN_0062d710();
        if (cVar1 == '\0') {
          uVar2 = 0;
        }
        else {
          uVar2 = 1;
        }
      }
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

