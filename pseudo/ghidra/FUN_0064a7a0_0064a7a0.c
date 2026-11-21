// FUN_0064a7a0  0064a7a0

undefined4 * __thiscall
FUN_0064a7a0(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5)

{
  uint uVar1;
  int *piVar2;
  size_t sVar3;
  void *_Src;
  undefined4 uVar4;
  int iVar5;
  size_t _Size;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006abead;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_00600420(param_5);
  local_8 = 0;
  *param_1 = CharacterAnimationCycle::vftable;
  piVar2 = (int *)FUN_00603c50(0x20534443,param_3 + param_4,0);
  param_1[7] = param_2;
  sVar3 = FUN_0061ed80(uVar1);
  if ((int)sVar3 < 0x401) {
    _Size = sVar3;
    _Src = (void *)(**(code **)(*piVar2 + 4))();
    memcpy(param_1 + 9,_Src,_Size);
    FUN_006041d0(piVar2);
    param_1[8] = param_3;
    param_1[0x109] = (int)sVar3 / 2;
    param_1[0x10a] = 0;
    uVar4 = (**(code **)(**(int **)(DAT_007960d8 + 0xc) + 4))();
    param_1[0x10d] = uVar4;
    iVar5 = FUN_005f3e50();
    param_1[0x10e] = iVar5 + (uint)*(byte *)((int)param_1 + param_1[0x10a] * 2 + 0x25);
  }
  else {
    FUN_005e9f20("false","..\\casinoShell\\character.cpp",0x722);
    FUN_006041d0(piVar2);
  }
  ExceptionList = local_10;
  return param_1;
}

