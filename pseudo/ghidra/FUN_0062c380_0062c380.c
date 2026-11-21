// FUN_0062c380  0062c380

undefined4 __thiscall
FUN_0062c380(int param_1,void *param_2,size_t param_3,undefined4 param_4,undefined4 param_5,
            char *param_6)

{
  int iVar1;
  undefined4 uVar2;
  void *_Dst;
  size_t sVar3;
  size_t _Count;
  FILE *_File;
  int local_20;
  int local_1c;
  
  if (*(int *)(param_1 + 8) == 0) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 0;
    }
    else {
      fflush(*(FILE **)(param_1 + 0xc));
      FUN_0062c820(param_4,param_5);
      iVar1 = **(int **)(param_1 + 0x14);
      _Dst = operator_new(*(int *)(*(int *)(param_1 + 0x10) + 0x10) + 0x10);
      memcpy(_Dst,*(void **)(param_1 + 0x14),*(size_t *)(*(int *)(param_1 + 0x10) + 0x10));
      operator_delete(*(void **)(param_1 + 0x14));
      *(void **)(param_1 + 0x14) = _Dst;
      *(int *)(*(int *)(param_1 + 0x10) + 0x10) = *(int *)(*(int *)(param_1 + 0x10) + 0x10) + 0x10;
      **(int **)(param_1 + 0x14) = **(int **)(param_1 + 0x14) + 1;
      *(undefined4 *)(*(int *)(param_1 + 0x14) + 8 + iVar1 * 0x10) = param_4;
      *(undefined4 *)(*(int *)(param_1 + 0x14) + 0xc + iVar1 * 0x10) = param_5;
      *(int *)(*(int *)(param_1 + 0x14) + 0x10 + iVar1 * 0x10) =
           *(int *)(*(int *)(param_1 + 0x14) + 0x10 + (iVar1 + -1) * 0x10) +
           *(int *)(*(int *)(param_1 + 0x14) + 0x14 + (iVar1 + -1) * 0x10);
      if (*(int *)(*(int *)(param_1 + 0x14) + 4) == 0) {
        local_20 = 0;
      }
      else {
        if (param_6 == (char *)0x0) {
          local_1c = 1;
        }
        else {
          sVar3 = strlen(param_6);
          local_1c = sVar3 + 1;
        }
        local_20 = local_1c;
      }
      *(size_t *)(*(int *)(param_1 + 0x14) + 0x14 + iVar1 * 0x10) = param_3 + local_20;
      *(int *)(*(int *)(param_1 + 0x10) + 0x14) =
           *(int *)(*(int *)(param_1 + 0x10) + 0x14) +
           *(int *)(*(int *)(param_1 + 0x14) + 0x14 + iVar1 * 0x10);
      fseek(*(FILE **)(param_1 + 0xc),*(long *)(*(int *)(param_1 + 0x14) + 0x10 + iVar1 * 0x10),0);
      if (*(int *)(*(int *)(param_1 + 0x14) + 4) != 0) {
        if (param_6 == (char *)0x0) {
          putc(0,*(FILE **)(param_1 + 0xc));
        }
        else {
          _File = *(FILE **)(param_1 + 0xc);
          _Count = 1;
          sVar3 = strlen(param_6);
          fwrite(param_6,sVar3 + 1,_Count,_File);
        }
      }
      fwrite(param_2,param_3,1,*(FILE **)(param_1 + 0xc));
      fwrite(*(void **)(param_1 + 0x14),*(size_t *)(*(int *)(param_1 + 0x10) + 0x10),1,
             *(FILE **)(param_1 + 0xc));
      fseek(*(FILE **)(param_1 + 0xc),0,0);
      fwrite(*(void **)(param_1 + 0x10),0x18,1,*(FILE **)(param_1 + 0xc));
      uVar2 = 1;
    }
  }
  else {
    FUN_005e9f20("false","..\\scilib\\platform\\prf.cpp",0x277);
    uVar2 = 0;
  }
  return uVar2;
}

