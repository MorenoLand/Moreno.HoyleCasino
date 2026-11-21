// FUN_00675100  00675100

undefined4 __thiscall FUN_00675100(int param_1,int *param_2,undefined4 param_3)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  FILE *_File;
  size_t _Size;
  size_t _Count;
  FILE *_File_00;
  undefined4 *local_60;
  int local_58;
  int local_54;
  int local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ad53e;
  local_10 = ExceptionList;
  uVar2 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (param_2 == (int *)0x0) {
    FUN_005e9f20("false","..\\casinoShell\\facemakerresource.cpp",0xe4,uVar2);
    uVar3 = 0;
  }
  else {
    if (*(int *)(param_1 + 4) != 0) {
      pvVar4 = operator_new(0x214);
      local_8 = 0;
      if (pvVar4 == (void *)0x0) {
        local_54 = 0;
      }
      else {
        local_54 = FUN_00688b60(*(undefined4 *)(param_1 + 4),0,1);
      }
      local_8 = 0xffffffff;
      *param_2 = local_54;
      __RTDynamicCast(*param_2,0,&VIniFile::RTTI_Type_Descriptor,
                      &ResourceIniFile::RTTI_Type_Descriptor,0);
      FUN_00688d40(param_3);
    }
    if (*(int *)(param_1 + 4) == 0) {
      for (local_1c = 9; -1 < local_1c; local_1c = local_1c + -1) {
        pvVar4 = operator_new(0x214);
        local_8 = 1;
        if (pvVar4 == (void *)0x0) {
          local_58 = 0;
        }
        else {
          local_58 = FUN_00688b60(local_1c + 0xf9060,0,1);
        }
        local_8 = 0xffffffff;
        *param_2 = local_58;
        iVar5 = __RTDynamicCast(*param_2,0,&VIniFile::RTTI_Type_Descriptor,
                                &ResourceIniFile::RTTI_Type_Descriptor,0);
        if ((iVar5 != 0) && (cVar1 = FUN_00688d90(), cVar1 != '\0')) {
          *(int *)(param_1 + 4) = local_1c + 0xf9060;
          FUN_00688d40(param_3);
          break;
        }
        if ((undefined4 *)*param_2 != (undefined4 *)0x0) {
          (*(code *)**(undefined4 **)*param_2)(1);
        }
      }
    }
    if (*(int *)(param_1 + 4) == 0) {
      FUN_005e9f20("false","..\\casinoShell\\facemakerresource.cpp",0x109,uVar2);
      uVar3 = 0;
    }
    else {
      if (*(char *)(param_1 + 8) == '\0') {
        *(undefined1 *)(param_1 + 8) = 1;
        pvVar4 = operator_new(0x214);
        local_8 = 2;
        if (pvVar4 == (void *)0x0) {
          local_60 = (undefined4 *)0x0;
        }
        else {
          local_60 = (undefined4 *)FUN_00688b60(0xf4241,0,1);
        }
        local_8 = 0xffffffff;
        iVar5 = __RTDynamicCast(local_60,0,&VIniFile::RTTI_Type_Descriptor,
                                &ResourceIniFile::RTTI_Type_Descriptor,0);
        if ((iVar5 != 0) && (cVar1 = FUN_00688d90(), cVar1 != '\0')) {
          iVar6 = FUN_005e9ff0(param_1 + 0xbc);
          iVar7 = FUN_0061ed80();
          if ((iVar6 != iVar7) &&
             (_File = (FILE *)FUN_005ea9c0(param_1 + 0xbc,&DAT_006c2d2c), _File != (FILE *)0x0)) {
            _Count = 1;
            _File_00 = _File;
            _Size = FUN_0061ed80();
            pvVar4 = (void *)(**(code **)(**(int **)(iVar5 + 0x208) + 4))();
            fwrite(pvVar4,_Size,_Count,_File_00);
            fclose(_File);
          }
        }
        if ((iVar5 != 0) && (local_60 != (undefined4 *)0x0)) {
          (**(code **)*local_60)(1);
        }
      }
      uVar3 = 1;
    }
  }
  ExceptionList = local_10;
  return uVar3;
}

