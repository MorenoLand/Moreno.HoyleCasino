// FUN_00666650  00666650

undefined4 __fastcall FUN_00666650(int *param_1)

{
  int iVar1;
  void *pvVar2;
  uint uVar3;
  size_t _NumOfElements;
  size_t _SizeOfElements;
  code *_PtFuncCompare;
  int local_8;
  
  if ((DAT_0162ee84 != (int *)0x0) && (iVar1 = (**(code **)(*DAT_0162ee84 + 0x168))(), iVar1 != 0))
  {
    iVar1 = (**(code **)(*DAT_0162ee84 + 0x16c))();
    param_1[1] = iVar1;
    pvVar2 = operator_new(-(uint)((int)((ulonglong)(uint)param_1[1] * 4 >> 0x20) != 0) |
                          (uint)((ulonglong)(uint)param_1[1] * 4));
    *param_1 = (int)pvVar2;
    for (local_8 = 0; local_8 < param_1[1]; local_8 = local_8 + 1) {
      uVar3 = FUN_00666f80();
      pvVar2 = operator_new(uVar3);
      *(void **)(*param_1 + local_8 * 4) = pvVar2;
    }
    _PtFuncCompare = FUN_006665a0;
    _SizeOfElements = 0x48;
    _NumOfElements = FUN_00666c60();
    qsort(&DAT_007712e0,_NumOfElements,_SizeOfElements,_PtFuncCompare);
    return 1;
  }
  *param_1 = 0;
  return 0;
}

