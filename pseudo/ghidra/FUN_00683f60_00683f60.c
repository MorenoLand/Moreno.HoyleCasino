// FUN_00683f60  00683f60

void FUN_00683f60(void)

{
  undefined4 uVar1;
  
  uVar1 = alcOpenDevice(0);
  uVar1 = alcCreateContext(uVar1,0);
  alcMakeContextCurrent(uVar1);
  return;
}

