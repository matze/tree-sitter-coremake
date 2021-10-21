#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 33
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 37
#define ALIAS_COUNT 0
#define TOKEN_COUNT 22
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_POUNDinclude = 1,
  anon_sym_workspace = 2,
  anon_sym_group = 3,
  anon_sym_con = 4,
  anon_sym_exe = 5,
  anon_sym_lib = 6,
  anon_sym_dll = 7,
  anon_sym_LBRACE = 8,
  anon_sym_RBRACE = 9,
  anon_sym_LPAREN = 10,
  anon_sym_RPAREN = 11,
  aux_sym_condition_token1 = 12,
  anon_sym_use = 13,
  anon_sym_source = 14,
  anon_sym_header = 15,
  anon_sym_DQUOTE = 16,
  aux_sym_string_token1 = 17,
  sym_value = 18,
  sym_file_path = 19,
  sym_target = 20,
  sym_comment = 21,
  sym_source_file = 22,
  sym_variable = 23,
  sym_include = 24,
  sym_definition = 25,
  sym_definition_type = 26,
  sym_block = 27,
  sym__conditional = 28,
  sym_condition = 29,
  sym__statement = 30,
  sym_use_statement = 31,
  sym_file_statement = 32,
  sym_string = 33,
  sym_name = 34,
  aux_sym_source_file_repeat1 = 35,
  aux_sym_block_repeat1 = 36,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_POUNDinclude] = "#include",
  [anon_sym_workspace] = "workspace",
  [anon_sym_group] = "group",
  [anon_sym_con] = "con",
  [anon_sym_exe] = "exe",
  [anon_sym_lib] = "lib",
  [anon_sym_dll] = "dll",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [aux_sym_condition_token1] = "condition_token1",
  [anon_sym_use] = "use",
  [anon_sym_source] = "source",
  [anon_sym_header] = "header",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [sym_value] = "value",
  [sym_file_path] = "file_path",
  [sym_target] = "target",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym_variable] = "variable",
  [sym_include] = "include",
  [sym_definition] = "definition",
  [sym_definition_type] = "definition_type",
  [sym_block] = "block",
  [sym__conditional] = "_conditional",
  [sym_condition] = "condition",
  [sym__statement] = "_statement",
  [sym_use_statement] = "use_statement",
  [sym_file_statement] = "file_statement",
  [sym_string] = "string",
  [sym_name] = "name",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_POUNDinclude] = anon_sym_POUNDinclude,
  [anon_sym_workspace] = anon_sym_workspace,
  [anon_sym_group] = anon_sym_group,
  [anon_sym_con] = anon_sym_con,
  [anon_sym_exe] = anon_sym_exe,
  [anon_sym_lib] = anon_sym_lib,
  [anon_sym_dll] = anon_sym_dll,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [aux_sym_condition_token1] = aux_sym_condition_token1,
  [anon_sym_use] = anon_sym_use,
  [anon_sym_source] = anon_sym_source,
  [anon_sym_header] = anon_sym_header,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [sym_value] = sym_value,
  [sym_file_path] = sym_file_path,
  [sym_target] = sym_target,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym_variable] = sym_variable,
  [sym_include] = sym_include,
  [sym_definition] = sym_definition,
  [sym_definition_type] = sym_definition_type,
  [sym_block] = sym_block,
  [sym__conditional] = sym__conditional,
  [sym_condition] = sym_condition,
  [sym__statement] = sym__statement,
  [sym_use_statement] = sym_use_statement,
  [sym_file_statement] = sym_file_statement,
  [sym_string] = sym_string,
  [sym_name] = sym_name,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_POUNDinclude] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_workspace] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_group] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_con] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exe] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lib] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dll] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_condition_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_use] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_source] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_header] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym_file_path] = {
    .visible = true,
    .named = true,
  },
  [sym_target] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_include] = {
    .visible = true,
    .named = true,
  },
  [sym_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_definition_type] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym__conditional] = {
    .visible = false,
    .named = true,
  },
  [sym_condition] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_use_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_file_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(19);
      if (lookahead == '"') ADVANCE(67);
      if (lookahead == '#') ADVANCE(13);
      if (lookahead == '(') ADVANCE(29);
      if (lookahead == ')') ADVANCE(30);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == 'c') ADVANCE(48);
      if (lookahead == 'd') ADVANCE(46);
      if (lookahead == 'e') ADVANCE(62);
      if (lookahead == 'g') ADVANCE(57);
      if (lookahead == 'h') ADVANCE(37);
      if (lookahead == 'l') ADVANCE(43);
      if (lookahead == 's') ADVANCE(49);
      if (lookahead == 'u') ADVANCE(59);
      if (lookahead == 'w') ADVANCE(50);
      if (lookahead == '{') ADVANCE(27);
      if (lookahead == '}') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '/') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(71);
      END_STATE();
    case 2:
      if (lookahead == '(') ADVANCE(29);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 3:
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == '/') ADVANCE(76);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == '/' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == 'h') ADVANCE(37);
      if (lookahead == 's') ADVANCE(49);
      if (lookahead == 'u') ADVANCE(59);
      if (lookahead == '}') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(78);
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(4);
      END_STATE();
    case 10:
      if (lookahead == 'c') ADVANCE(14);
      END_STATE();
    case 11:
      if (lookahead == 'd') ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 13:
      if (lookahead == 'i') ADVANCE(15);
      END_STATE();
    case 14:
      if (lookahead == 'l') ADVANCE(16);
      END_STATE();
    case 15:
      if (lookahead == 'n') ADVANCE(10);
      END_STATE();
    case 16:
      if (lookahead == 'u') ADVANCE(11);
      END_STATE();
    case 17:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 18:
      if (eof) ADVANCE(19);
      if (lookahead == '#') ADVANCE(13);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == 'c') ADVANCE(48);
      if (lookahead == 'd') ADVANCE(46);
      if (lookahead == 'e') ADVANCE(62);
      if (lookahead == 'g') ADVANCE(57);
      if (lookahead == 'l') ADVANCE(43);
      if (lookahead == 'w') ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_POUNDinclude);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_workspace);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_group);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_con);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_exe);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_lib);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_dll);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_condition_token1);
      if (lookahead == 'a') ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_condition_token1);
      if (lookahead == 'a') ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_condition_token1);
      if (lookahead == 'b') ADVANCE(25);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_condition_token1);
      if (lookahead == 'c') ADVANCE(40);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_condition_token1);
      if (lookahead == 'c') ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_condition_token1);
      if (lookahead == 'd') ADVANCE(42);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_condition_token1);
      if (lookahead == 'e') ADVANCE(31);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_condition_token1);
      if (lookahead == 'e') ADVANCE(24);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_condition_token1);
      if (lookahead == 'e') ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_condition_token1);
      if (lookahead == 'e') ADVANCE(65);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_condition_token1);
      if (lookahead == 'e') ADVANCE(21);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_condition_token1);
      if (lookahead == 'e') ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_condition_token1);
      if (lookahead == 'i') ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_condition_token1);
      if (lookahead == 'k') ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_condition_token1);
      if (lookahead == 'l') ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_condition_token1);
      if (lookahead == 'l') ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_condition_token1);
      if (lookahead == 'n') ADVANCE(23);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_condition_token1);
      if (lookahead == 'o') ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_condition_token1);
      if (lookahead == 'o') ADVANCE(61);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_condition_token1);
      if (lookahead == 'o') ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_condition_token1);
      if (lookahead == 'o') ADVANCE(60);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_condition_token1);
      if (lookahead == 'p') ADVANCE(22);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_condition_token1);
      if (lookahead == 'p') ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_condition_token1);
      if (lookahead == 'r') ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_condition_token1);
      if (lookahead == 'r') ADVANCE(34);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_condition_token1);
      if (lookahead == 'r') ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_condition_token1);
      if (lookahead == 'r') ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_condition_token1);
      if (lookahead == 's') ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_condition_token1);
      if (lookahead == 's') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_condition_token1);
      if (lookahead == 'u') ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_condition_token1);
      if (lookahead == 'u') ADVANCE(55);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_condition_token1);
      if (lookahead == 'x') ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_condition_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_use);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_source);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_header);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(71);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(71);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_file_path);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_file_path);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(78);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_target);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == '/' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(78);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_comment);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(78);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(78);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 18},
  [2] = {.lex_state = 18},
  [3] = {.lex_state = 18},
  [4] = {.lex_state = 5},
  [5] = {.lex_state = 5},
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 18},
  [8] = {.lex_state = 18},
  [9] = {.lex_state = 18},
  [10] = {.lex_state = 18},
  [11] = {.lex_state = 18},
  [12] = {.lex_state = 18},
  [13] = {.lex_state = 5},
  [14] = {.lex_state = 5},
  [15] = {.lex_state = 5},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 6},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 7},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 9},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 7},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 7},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_POUNDinclude] = ACTIONS(1),
    [anon_sym_workspace] = ACTIONS(1),
    [anon_sym_group] = ACTIONS(1),
    [anon_sym_con] = ACTIONS(1),
    [anon_sym_exe] = ACTIONS(1),
    [anon_sym_lib] = ACTIONS(1),
    [anon_sym_dll] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [aux_sym_condition_token1] = ACTIONS(1),
    [anon_sym_use] = ACTIONS(1),
    [anon_sym_source] = ACTIONS(1),
    [anon_sym_header] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(31),
    [sym_variable] = STATE(2),
    [sym_include] = STATE(2),
    [sym_definition] = STATE(2),
    [sym_definition_type] = STATE(30),
    [sym_name] = STATE(29),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_POUNDinclude] = ACTIONS(7),
    [anon_sym_workspace] = ACTIONS(9),
    [anon_sym_group] = ACTIONS(9),
    [anon_sym_con] = ACTIONS(9),
    [anon_sym_exe] = ACTIONS(9),
    [anon_sym_lib] = ACTIONS(9),
    [anon_sym_dll] = ACTIONS(9),
    [aux_sym_condition_token1] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_POUNDinclude,
    ACTIONS(11), 1,
      aux_sym_condition_token1,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    STATE(29), 1,
      sym_name,
    STATE(30), 1,
      sym_definition_type,
    STATE(3), 4,
      sym_variable,
      sym_include,
      sym_definition,
      aux_sym_source_file_repeat1,
    ACTIONS(9), 6,
      anon_sym_workspace,
      anon_sym_group,
      anon_sym_con,
      anon_sym_exe,
      anon_sym_lib,
      anon_sym_dll,
  [33] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    ACTIONS(17), 1,
      anon_sym_POUNDinclude,
    ACTIONS(23), 1,
      aux_sym_condition_token1,
    STATE(29), 1,
      sym_name,
    STATE(30), 1,
      sym_definition_type,
    STATE(3), 4,
      sym_variable,
      sym_include,
      sym_definition,
      aux_sym_source_file_repeat1,
    ACTIONS(20), 6,
      anon_sym_workspace,
      anon_sym_group,
      anon_sym_con,
      anon_sym_exe,
      anon_sym_lib,
      anon_sym_dll,
  [66] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(26), 1,
      anon_sym_RBRACE,
    ACTIONS(28), 1,
      aux_sym_condition_token1,
    ACTIONS(31), 1,
      anon_sym_use,
    STATE(32), 1,
      sym_name,
    ACTIONS(34), 2,
      anon_sym_source,
      anon_sym_header,
    STATE(4), 5,
      sym_variable,
      sym__statement,
      sym_use_statement,
      sym_file_statement,
      aux_sym_block_repeat1,
  [93] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      aux_sym_condition_token1,
    ACTIONS(37), 1,
      anon_sym_RBRACE,
    ACTIONS(39), 1,
      anon_sym_use,
    STATE(32), 1,
      sym_name,
    ACTIONS(41), 2,
      anon_sym_source,
      anon_sym_header,
    STATE(4), 5,
      sym_variable,
      sym__statement,
      sym_use_statement,
      sym_file_statement,
      aux_sym_block_repeat1,
  [120] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      aux_sym_condition_token1,
    ACTIONS(39), 1,
      anon_sym_use,
    ACTIONS(43), 1,
      anon_sym_RBRACE,
    STATE(32), 1,
      sym_name,
    ACTIONS(41), 2,
      anon_sym_source,
      anon_sym_header,
    STATE(5), 5,
      sym_variable,
      sym__statement,
      sym_use_statement,
      sym_file_statement,
      aux_sym_block_repeat1,
  [147] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 2,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
    ACTIONS(47), 7,
      anon_sym_workspace,
      anon_sym_group,
      anon_sym_con,
      anon_sym_exe,
      anon_sym_lib,
      anon_sym_dll,
      aux_sym_condition_token1,
  [164] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 2,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
    ACTIONS(51), 7,
      anon_sym_workspace,
      anon_sym_group,
      anon_sym_con,
      anon_sym_exe,
      anon_sym_lib,
      anon_sym_dll,
      aux_sym_condition_token1,
  [181] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 2,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
    ACTIONS(55), 7,
      anon_sym_workspace,
      anon_sym_group,
      anon_sym_con,
      anon_sym_exe,
      anon_sym_lib,
      anon_sym_dll,
      aux_sym_condition_token1,
  [198] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 2,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
    ACTIONS(59), 7,
      anon_sym_workspace,
      anon_sym_group,
      anon_sym_con,
      anon_sym_exe,
      anon_sym_lib,
      anon_sym_dll,
      aux_sym_condition_token1,
  [215] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 2,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
    ACTIONS(63), 7,
      anon_sym_workspace,
      anon_sym_group,
      anon_sym_con,
      anon_sym_exe,
      anon_sym_lib,
      anon_sym_dll,
      aux_sym_condition_token1,
  [232] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 2,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
    ACTIONS(67), 7,
      anon_sym_workspace,
      anon_sym_group,
      anon_sym_con,
      anon_sym_exe,
      anon_sym_lib,
      anon_sym_dll,
      aux_sym_condition_token1,
  [249] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_RBRACE,
    ACTIONS(59), 4,
      aux_sym_condition_token1,
      anon_sym_use,
      anon_sym_source,
      anon_sym_header,
  [262] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_RBRACE,
    ACTIONS(71), 4,
      aux_sym_condition_token1,
      anon_sym_use,
      anon_sym_source,
      anon_sym_header,
  [275] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_RBRACE,
    ACTIONS(75), 4,
      aux_sym_condition_token1,
      anon_sym_use,
      anon_sym_source,
      anon_sym_header,
  [288] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 1,
      sym_target,
    STATE(27), 1,
      sym__conditional,
  [301] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    STATE(9), 1,
      sym_string,
  [311] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 1,
      aux_sym_condition_token1,
    STATE(21), 1,
      sym_condition,
  [321] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_LBRACE,
    STATE(12), 1,
      sym_block,
  [331] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
  [338] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      anon_sym_RPAREN,
  [345] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      sym_target,
  [352] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      sym_value,
  [359] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      sym_target,
  [366] = 2,
    ACTIONS(97), 1,
      sym_file_path,
    ACTIONS(99), 1,
      sym_comment,
  [373] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      anon_sym_RPAREN,
  [380] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      sym_target,
  [387] = 2,
    ACTIONS(99), 1,
      sym_comment,
    ACTIONS(105), 1,
      aux_sym_string_token1,
  [394] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      sym_value,
  [401] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      sym_target,
  [408] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      ts_builtin_sym_end,
  [415] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      sym_value,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 33,
  [SMALL_STATE(4)] = 66,
  [SMALL_STATE(5)] = 93,
  [SMALL_STATE(6)] = 120,
  [SMALL_STATE(7)] = 147,
  [SMALL_STATE(8)] = 164,
  [SMALL_STATE(9)] = 181,
  [SMALL_STATE(10)] = 198,
  [SMALL_STATE(11)] = 215,
  [SMALL_STATE(12)] = 232,
  [SMALL_STATE(13)] = 249,
  [SMALL_STATE(14)] = 262,
  [SMALL_STATE(15)] = 275,
  [SMALL_STATE(16)] = 288,
  [SMALL_STATE(17)] = 301,
  [SMALL_STATE(18)] = 311,
  [SMALL_STATE(19)] = 321,
  [SMALL_STATE(20)] = 331,
  [SMALL_STATE(21)] = 338,
  [SMALL_STATE(22)] = 345,
  [SMALL_STATE(23)] = 352,
  [SMALL_STATE(24)] = 359,
  [SMALL_STATE(25)] = 366,
  [SMALL_STATE(26)] = 373,
  [SMALL_STATE(27)] = 380,
  [SMALL_STATE(28)] = 387,
  [SMALL_STATE(29)] = 394,
  [SMALL_STATE(30)] = 401,
  [SMALL_STATE(31)] = 408,
  [SMALL_STATE(32)] = 415,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(17),
  [20] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(16),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(23),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(23),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(24),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(25),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 2),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include, 2),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 2),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 2),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 3),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_definition, 3),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_statement, 2),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_statement, 2),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_statement, 2),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_use_statement, 2),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition_type, 1),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__conditional, 3),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition_type, 2),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [111] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_coremake(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
