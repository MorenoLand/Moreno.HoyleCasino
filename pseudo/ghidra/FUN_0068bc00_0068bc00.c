// FUN_0068bc00  0068bc00

/* WARNING: Removing unreachable block (ram,0x0068bc63) */
/* WARNING: Removing unreachable block (ram,0x0068bc9c) */
/* WARNING: Removing unreachable block (ram,0x0068bca4) */
/* WARNING: Removing unreachable block (ram,0x0068bcaa) */
/* WARNING: Removing unreachable block (ram,0x0068bd15) */
/* WARNING: Removing unreachable block (ram,0x0068bd40) */
/* WARNING: Removing unreachable block (ram,0x0068bd48) */
/* WARNING: Removing unreachable block (ram,0x0068bd4e) */
/* WARNING: Removing unreachable block (ram,0x0068bdcd) */
/* WARNING: Removing unreachable block (ram,0x0068bdf8) */
/* WARNING: Removing unreachable block (ram,0x0068be33) */
/* WARNING: Removing unreachable block (ram,0x0068be7c) */
/* WARNING: Removing unreachable block (ram,0x0068be4d) */
/* WARNING: Removing unreachable block (ram,0x0068beae) */
/* WARNING: Removing unreachable block (ram,0x0068bed9) */
/* WARNING: Removing unreachable block (ram,0x0068bf18) */
/* WARNING: Removing unreachable block (ram,0x0068bf20) */
/* WARNING: Removing unreachable block (ram,0x0068bf26) */
/* WARNING: Removing unreachable block (ram,0x0068bf38) */
/* WARNING: Removing unreachable block (ram,0x0068bf5f) */
/* WARNING: Removing unreachable block (ram,0x0068bfa8) */
/* WARNING: Removing unreachable block (ram,0x0068bf79) */
/* WARNING: Removing unreachable block (ram,0x0068bd60) */
/* WARNING: Removing unreachable block (ram,0x0068bd9e) */
/* WARNING: Removing unreachable block (ram,0x0068bdc8) */
/* WARNING: Removing unreachable block (ram,0x0068bcbc) */
/* WARNING: Removing unreachable block (ram,0x0068bce3) */
/* WARNING: Removing unreachable block (ram,0x0068bd10) */
/* WARNING: Removing unreachable block (ram,0x0068bfd5) */

undefined4 * __thiscall
FUN_0068bc00(int param_1,undefined4 *param_2,undefined4 param_3,int param_4,
            basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_5)

{
  undefined4 uVar1;
  char cVar2;
  bool bVar3;
  undefined4 *puVar4;
  undefined1 local_48 [12];
  undefined1 local_3c [8];
  undefined1 local_34 [8];
  undefined1 local_2c [32];
  undefined4 local_c;
  int local_8;
  
  local_c = 0;
  local_8 = 0;
  if (*(int *)(param_1 + 8) == 0) {
    FUN_0068d070(param_2,1,*(undefined4 *)(param_1 + 4),param_5);
  }
  else {
    FUN_0068d4b0(**(undefined4 **)(param_1 + 4),param_1);
    cVar2 = FUN_006118f0(local_2c);
    if (cVar2 == '\0') {
      FUN_0068d4b0(*(undefined4 *)(param_1 + 4),param_1);
      cVar2 = FUN_006118f0(local_34);
      if (cVar2 == '\0') {
        bVar3 = std::operator<<char,std::char_traits<char>,std::allocator<char>_>
                          (param_5,(basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                    *)(param_4 + 0xc));
        if (bVar3) {
          local_c = param_3;
          local_8 = param_4;
          FUN_0068eea0();
          bVar3 = std::operator<<char,std::char_traits<char>,std::allocator<char>_>
                            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                             (local_8 + 0xc),param_5);
          if (bVar3) {
            if (*(char *)(*(int *)(local_8 + 8) + 0x35) != '\0') {
              FUN_0068d070(param_2,0,local_8,param_5);
              return param_2;
            }
            FUN_0068d070(param_2,1,param_4,param_5);
            return param_2;
          }
        }
        bVar3 = std::operator<<char,std::char_traits<char>,std::allocator<char>_>
                          ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                           (param_4 + 0xc),param_5);
        if (bVar3) {
          local_c = param_3;
          local_8 = param_4;
          FUN_0068d4b0(*(undefined4 *)(param_1 + 4),param_1);
          FUN_0068e790();
          cVar2 = FUN_006118f0(local_3c);
          if ((cVar2 != '\0') ||
             (bVar3 = std::operator<<char,std::char_traits<char>,std::allocator<char>_>
                                (param_5,(basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                          *)(local_8 + 0xc)), bVar3)) {
            if (*(char *)(*(int *)(param_4 + 8) + 0x35) != '\0') {
              FUN_0068d070(param_2,0,param_4,param_5);
              return param_2;
            }
            FUN_0068d070(param_2,1,local_8,param_5);
            return param_2;
          }
        }
      }
      else {
        bVar3 = std::operator<<char,std::char_traits<char>,std::allocator<char>_>
                          ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                           (*(int *)(*(int *)(param_1 + 4) + 8) + 0xc),param_5);
        if (bVar3) {
          FUN_0068d070(param_2,0,*(undefined4 *)(*(int *)(param_1 + 4) + 8),param_5);
          return param_2;
        }
      }
    }
    else {
      bVar3 = std::operator<<char,std::char_traits<char>,std::allocator<char>_>
                        (param_5,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                                 (param_4 + 0xc));
      if (bVar3) {
        FUN_0068d070(param_2,1,param_4,param_5);
        return param_2;
      }
    }
    puVar4 = (undefined4 *)FUN_0068cc40(local_48,param_5);
    uVar1 = puVar4[1];
    *param_2 = *puVar4;
    param_2[1] = uVar1;
  }
  return param_2;
}

