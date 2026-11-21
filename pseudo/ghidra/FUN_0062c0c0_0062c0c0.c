// FUN_0062c0c0  0062c0c0

undefined4 __thiscall
FUN_0062c0c0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,char *param_5)

{
  int iVar1;
  void *_Dst;
  size_t sVar2;
  int iVar3;
  undefined4 uVar4;
  size_t _Count;
  FILE *_File;
  int local_20;
  int local_1c;
  
  if (*(int *)(param_1 + 8) == 0) {
    if (param_2 == 0) {
      uVar4 = 0;
    }
    else {
      fflush(*(FILE **)(param_1 + 0xc));
      FUN_0062c820(param_3,param_4);
      iVar1 = **(int **)(param_1 + 0x14);
      _Dst = operator_new(*(int *)(*(int *)(param_1 + 0x10) + 0x10) + 0x10);
      memcpy(_Dst,*(void **)(param_1 + 0x14),*(size_t *)(*(int *)(param_1 + 0x10) + 0x10));
      operator_delete(*(void **)(param_1 + 0x14));
      *(void **)(param_1 + 0x14) = _Dst;
      *(int *)(*(int *)(param_1 + 0x10) + 0x10) = *(int *)(*(int *)(param_1 + 0x10) + 0x10) + 0x10;
      **(int **)(param_1 + 0x14) = **(int **)(param_1 + 0x14) + 1;
      *(undefined4 *)(*(int *)(param_1 + 0x14) + 8 + iVar1 * 0x10) = param_3;
      *(undefined4 *)(*(int *)(param_1 + 0x14) + 0xc + iVar1 * 0x10) = param_4;
      *(int *)(*(int *)(param_1 + 0x14) + 0x10 + iVar1 * 0x10) =
           *(int *)(*(int *)(param_1 + 0x14) + 0x10 + (iVar1 + -1) * 0x10) +
           *(int *)(*(int *)(param_1 + 0x14) + 0x14 + (iVar1 + -1) * 0x10);
      if (*(int *)(*(int *)(param_1 + 0x14) + 4) == 0) {
        local_20 = 0;
      }
      else {
        if (param_5 == (char *)0x0) {
          local_1c = 1;
        }
        else {
          sVar2 = strlen(param_5);
          local_1c = sVar2 + 1;
        }
        local_20 = local_1c;
      }
      iVar3 = FUN_005e9fd0(param_2);
      *(int *)(*(int *)(param_1 + 0x14) + 0x14 + iVar1 * 0x10) = iVar3 + local_20;
      *(int *)(*(int *)(param_1 + 0x10) + 0x14) =
           *(int *)(*(int *)(param_1 + 0x10) + 0x14) +
           *(int *)(*(int *)(param_1 + 0x14) + 0x14 + iVar1 * 0x10);
      fseek(*(FILE **)(param_1 + 0xc),*(long *)(*(int *)(param_1 + 0x14) + 0x10 + iVar1 * 0x10),0);
      if (*(int *)(*(int *)(param_1 + 0x14) + 4) != 0) {
        if (param_5 == (char *)0x0) {
          putc(0,*(FILE **)(param_1 + 0xc));
        }
        else {
          _File = *(FILE **)(param_1 + 0xc);
          _Count = 1;
          sVar2 = strlen(param_5);
          fwrite(param_5,sVar2 + 1,_Count,_File);
        }
      }
      uVar4 = FUN_005e9fd0(param_2);
      FUN_0062bd60(*(undefined4 *)(param_1 + 0xc),param_2,uVar4);
      fwrite(*(void **)(param_1 + 0x14),*(size_t *)(*(int *)(param_1 + 0x10) + 0x10),1,
             *(FILE **)(param_1 + 0xc));
      fseek(*(FILE **)(param_1 + 0xc),0,0);
      fwrite(*(void **)(param_1 + 0x10),0x18,1,*(FILE **)(param_1 + 0xc));
      uVar4 = 1;
    }
  }
  else {
    FUN_005e9f20("false","..\\scilib\\platform\\prf.cpp",0x242);
    uVar4 = 0;
  }
  return uVar4;
}

