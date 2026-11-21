// FUN_00683f80  00683f80

void FUN_00683f80(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = alcGetCurrentContext();
  uVar2 = alcGetContextsDevice(uVar1);
  alcMakeContextCurrent(0);
  alcDestroyContext(uVar1);
  alcCloseDevice(uVar2);
  return;
}

