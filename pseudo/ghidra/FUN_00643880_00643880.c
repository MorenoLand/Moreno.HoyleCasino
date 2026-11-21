// FUN_00643880  00643880

uint __thiscall FUN_00643880(int param_1,short param_2,int param_3)

{
  uint uVar1;
  int local_c;
  
  if ((param_3 < 0) || (*(int *)(param_1 + 0x80c) <= param_3)) {
    FUN_005e9f20("(0<=pos) && (pos<numCards)","..\\casinoShell\\card.cpp",0x3f7);
  }
  local_c = 0;
  while( true ) {
    if (*(int *)(param_1 + 0x80c) <= local_c) {
      uVar1 = FUN_0062fde0("problem arranging deck");
      return uVar1 & 0xffffff00;
    }
    if (*(short *)(param_1 + 4 + local_c * 2) == param_2) break;
    local_c = local_c + 1;
  }
  *(undefined2 *)(param_1 + 4 + local_c * 2) = *(undefined2 *)(param_1 + 4 + param_3 * 2);
  *(short *)(param_1 + 4 + param_3 * 2) = param_2;
  return CONCAT31((int3)(CONCAT22((short)((uint)param_3 >> 0x10),param_2) >> 8),1);
}

