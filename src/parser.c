#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 75
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 54
#define ALIAS_COUNT 0
#define TOKEN_COUNT 32
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_POUNDinclude = 1,
  anon_sym_workspace = 2,
  anon_sym_group = 3,
  anon_sym_con = 4,
  anon_sym_exe = 5,
  anon_sym_lib = 6,
  anon_sym_dll = 7,
  anon_sym_test = 8,
  anon_sym_LBRACE = 9,
  anon_sym_RBRACE = 10,
  anon_sym_LPAREN = 11,
  anon_sym_RPAREN = 12,
  anon_sym_BANG = 13,
  anon_sym_AMP_AMP = 14,
  anon_sym_PIPE_PIPE = 15,
  anon_sym_COMMA = 16,
  anon_sym_use = 17,
  anon_sym_dep = 18,
  anon_sym_source = 19,
  anon_sym_header = 20,
  anon_sym_include = 21,
  anon_sym_if = 22,
  anon_sym_endif = 23,
  anon_sym_DQUOTE = 24,
  aux_sym_string_literal_token1 = 25,
  aux_sym_identifier_token1 = 26,
  aux_sym_identifier_expression_token1 = 27,
  sym_name = 28,
  sym_value = 29,
  sym_file_path = 30,
  sym_comment = 31,
  sym_source_file = 32,
  sym_variable = 33,
  sym_include = 34,
  sym_definition = 35,
  sym_definition_type = 36,
  sym_block = 37,
  sym__conditional = 38,
  sym__expression = 39,
  sym_unary_expression = 40,
  sym_binary_expression = 41,
  sym_comma_expression = 42,
  sym_parenthesized_expression = 43,
  sym__statement = 44,
  sym_use_statement = 45,
  sym_file_statement = 46,
  sym_if_statement = 47,
  sym_string_literal = 48,
  sym_identifier = 49,
  sym_identifier_expression = 50,
  aux_sym_source_file_repeat1 = 51,
  aux_sym_block_repeat1 = 52,
  aux_sym_if_statement_repeat1 = 53,
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
  [anon_sym_test] = "test",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_BANG] = "!",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_COMMA] = ",",
  [anon_sym_use] = "use",
  [anon_sym_dep] = "dep",
  [anon_sym_source] = "source",
  [anon_sym_header] = "header",
  [anon_sym_include] = "include",
  [anon_sym_if] = "if",
  [anon_sym_endif] = "endif",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_literal_token1] = "string_literal_token1",
  [aux_sym_identifier_token1] = "identifier_token1",
  [aux_sym_identifier_expression_token1] = "identifier_expression_token1",
  [sym_name] = "name",
  [sym_value] = "value",
  [sym_file_path] = "file_path",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym_variable] = "variable",
  [sym_include] = "include",
  [sym_definition] = "definition",
  [sym_definition_type] = "definition_type",
  [sym_block] = "block",
  [sym__conditional] = "_conditional",
  [sym__expression] = "_expression",
  [sym_unary_expression] = "unary_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_comma_expression] = "comma_expression",
  [sym_parenthesized_expression] = "parenthesized_expression",
  [sym__statement] = "_statement",
  [sym_use_statement] = "use_statement",
  [sym_file_statement] = "file_statement",
  [sym_if_statement] = "if_statement",
  [sym_string_literal] = "string_literal",
  [sym_identifier] = "identifier",
  [sym_identifier_expression] = "identifier_expression",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_if_statement_repeat1] = "if_statement_repeat1",
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
  [anon_sym_test] = anon_sym_test,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_use] = anon_sym_use,
  [anon_sym_dep] = anon_sym_dep,
  [anon_sym_source] = anon_sym_source,
  [anon_sym_header] = anon_sym_header,
  [anon_sym_include] = anon_sym_include,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_endif] = anon_sym_endif,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_literal_token1] = aux_sym_string_literal_token1,
  [aux_sym_identifier_token1] = aux_sym_identifier_token1,
  [aux_sym_identifier_expression_token1] = aux_sym_identifier_expression_token1,
  [sym_name] = sym_name,
  [sym_value] = sym_value,
  [sym_file_path] = sym_file_path,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym_variable] = sym_variable,
  [sym_include] = sym_include,
  [sym_definition] = sym_definition,
  [sym_definition_type] = sym_definition_type,
  [sym_block] = sym_block,
  [sym__conditional] = sym__conditional,
  [sym__expression] = sym__expression,
  [sym_unary_expression] = sym_unary_expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym_comma_expression] = sym_comma_expression,
  [sym_parenthesized_expression] = sym_parenthesized_expression,
  [sym__statement] = sym__statement,
  [sym_use_statement] = sym_use_statement,
  [sym_file_statement] = sym_file_statement,
  [sym_if_statement] = sym_if_statement,
  [sym_string_literal] = sym_string_literal,
  [sym_identifier] = sym_identifier,
  [sym_identifier_expression] = sym_identifier_expression,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_if_statement_repeat1] = aux_sym_if_statement_repeat1,
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
  [anon_sym_test] = {
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
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_use] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dep] = {
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
  [anon_sym_include] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endif] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_identifier_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_identifier_expression_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym_file_path] = {
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
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_unary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_comma_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_parenthesized_expression] = {
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
  [sym_if_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier_expression] = {
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
  [aux_sym_if_statement_repeat1] = {
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
      if (eof) ADVANCE(78);
      if (lookahead == '!') ADVANCE(98);
      if (lookahead == '"') ADVANCE(115);
      if (lookahead == '#') ADVANCE(37);
      if (lookahead == '&') ADVANCE(2);
      if (lookahead == '(') ADVANCE(96);
      if (lookahead == ')') ADVANCE(97);
      if (lookahead == ',') ADVANCE(101);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == 'c') ADVANCE(53);
      if (lookahead == 'd') ADVANCE(21);
      if (lookahead == 'e') ADVANCE(46);
      if (lookahead == 'g') ADVANCE(63);
      if (lookahead == 'h') ADVANCE(22);
      if (lookahead == 'i') ADVANCE(34);
      if (lookahead == 'l') ADVANCE(38);
      if (lookahead == 's') ADVANCE(49);
      if (lookahead == 't') ADVANCE(30);
      if (lookahead == 'u') ADVANCE(67);
      if (lookahead == 'w') ADVANCE(52);
      if (lookahead == '{') ADVANCE(94);
      if (lookahead == '|') ADVANCE(74);
      if (lookahead == '}') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(121);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '/') ADVANCE(117);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(119);
      END_STATE();
    case 2:
      if (lookahead == '&') ADVANCE(99);
      END_STATE();
    case 3:
      if (lookahead == '(') ADVANCE(96);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 4:
      if (lookahead == '(') ADVANCE(96);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(6);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(75);
      if (lookahead == '/') ADVANCE(157);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(75);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == 'd') ADVANCE(32);
      if (lookahead == 'h') ADVANCE(31);
      if (lookahead == 'i') ADVANCE(36);
      if (lookahead == 's') ADVANCE(55);
      if (lookahead == 'u') ADVANCE(66);
      if (lookahead == '{') ADVANCE(94);
      if (lookahead == '}') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(159);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(18);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(15);
      END_STATE();
    case 12:
      if (lookahead == 'b') ADVANCE(88);
      END_STATE();
    case 13:
      if (lookahead == 'c') ADVANCE(44);
      END_STATE();
    case 14:
      if (lookahead == 'c') ADVANCE(25);
      END_STATE();
    case 15:
      if (lookahead == 'c') ADVANCE(28);
      END_STATE();
    case 16:
      if (lookahead == 'c') ADVANCE(45);
      END_STATE();
    case 17:
      if (lookahead == 'd') ADVANCE(39);
      END_STATE();
    case 18:
      if (lookahead == 'd') ADVANCE(33);
      END_STATE();
    case 19:
      if (lookahead == 'd') ADVANCE(26);
      END_STATE();
    case 20:
      if (lookahead == 'd') ADVANCE(27);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(56);
      if (lookahead == 'l') ADVANCE(42);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(10);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 34:
      if (lookahead == 'f') ADVANCE(112);
      if (lookahead == 'n') ADVANCE(13);
      END_STATE();
    case 35:
      if (lookahead == 'f') ADVANCE(114);
      END_STATE();
    case 36:
      if (lookahead == 'f') ADVANCE(113);
      if (lookahead == 'n') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 37:
      if (lookahead == 'i') ADVANCE(48);
      END_STATE();
    case 38:
      if (lookahead == 'i') ADVANCE(12);
      END_STATE();
    case 39:
      if (lookahead == 'i') ADVANCE(35);
      END_STATE();
    case 40:
      if (lookahead == 'i') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 41:
      if (lookahead == 'k') ADVANCE(65);
      END_STATE();
    case 42:
      if (lookahead == 'l') ADVANCE(90);
      END_STATE();
    case 43:
      if (lookahead == 'l') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 44:
      if (lookahead == 'l') ADVANCE(71);
      END_STATE();
    case 45:
      if (lookahead == 'l') ADVANCE(72);
      END_STATE();
    case 46:
      if (lookahead == 'n') ADVANCE(17);
      if (lookahead == 'x') ADVANCE(23);
      END_STATE();
    case 47:
      if (lookahead == 'n') ADVANCE(84);
      END_STATE();
    case 48:
      if (lookahead == 'n') ADVANCE(16);
      END_STATE();
    case 49:
      if (lookahead == 'o') ADVANCE(70);
      END_STATE();
    case 50:
      if (lookahead == 'o') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 51:
      if (lookahead == 'o') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 52:
      if (lookahead == 'o') ADVANCE(59);
      END_STATE();
    case 53:
      if (lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 54:
      if (lookahead == 'o') ADVANCE(69);
      END_STATE();
    case 55:
      if (lookahead == 'o') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 56:
      if (lookahead == 'p') ADVANCE(104);
      END_STATE();
    case 57:
      if (lookahead == 'p') ADVANCE(82);
      END_STATE();
    case 58:
      if (lookahead == 'p') ADVANCE(11);
      END_STATE();
    case 59:
      if (lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 60:
      if (lookahead == 'r') ADVANCE(108);
      END_STATE();
    case 61:
      if (lookahead == 'r') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 62:
      if (lookahead == 'r') ADVANCE(14);
      END_STATE();
    case 63:
      if (lookahead == 'r') ADVANCE(54);
      END_STATE();
    case 64:
      if (lookahead == 's') ADVANCE(68);
      END_STATE();
    case 65:
      if (lookahead == 's') ADVANCE(58);
      END_STATE();
    case 66:
      if (lookahead == 's') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 67:
      if (lookahead == 's') ADVANCE(24);
      END_STATE();
    case 68:
      if (lookahead == 't') ADVANCE(92);
      END_STATE();
    case 69:
      if (lookahead == 'u') ADVANCE(57);
      END_STATE();
    case 70:
      if (lookahead == 'u') ADVANCE(62);
      END_STATE();
    case 71:
      if (lookahead == 'u') ADVANCE(19);
      END_STATE();
    case 72:
      if (lookahead == 'u') ADVANCE(20);
      END_STATE();
    case 73:
      if (lookahead == 'x') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 74:
      if (lookahead == '|') ADVANCE(100);
      END_STATE();
    case 75:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 76:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 77:
      if (eof) ADVANCE(78);
      if (lookahead == '#') ADVANCE(37);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == 'c') ADVANCE(50);
      if (lookahead == 'd') ADVANCE(43);
      if (lookahead == 'e') ADVANCE(73);
      if (lookahead == 'g') ADVANCE(61);
      if (lookahead == 'l') ADVANCE(40);
      if (lookahead == 't') ADVANCE(29);
      if (lookahead == 'w') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(77)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_POUNDinclude);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_workspace);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_workspace);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_group);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_group);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_con);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_con);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_exe);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_exe);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_lib);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_lib);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_dll);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_dll);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_test);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_test);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_use);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_use);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_dep);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_dep);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_source);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_source);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_header);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_header);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_include);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_endif);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '/') ADVANCE(117);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(119);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '/') ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(119);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(118);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(119);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_identifier_expression_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(121);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'b') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'd') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'd') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'k') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'p') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'p') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'p') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_file_path);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_file_path);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(159);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '.') ADVANCE(158);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(159);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_comment);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(159);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(159);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 77},
  [2] = {.lex_state = 77},
  [3] = {.lex_state = 77},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 7},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 7},
  [8] = {.lex_state = 7},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 77},
  [18] = {.lex_state = 77},
  [19] = {.lex_state = 77},
  [20] = {.lex_state = 77},
  [21] = {.lex_state = 77},
  [22] = {.lex_state = 77},
  [23] = {.lex_state = 77},
  [24] = {.lex_state = 7},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 7},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 7},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 7},
  [35] = {.lex_state = 7},
  [36] = {.lex_state = 7},
  [37] = {.lex_state = 7},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 7},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 4},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 3},
  [59] = {.lex_state = 3},
  [60] = {.lex_state = 3},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 3},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 8},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 4},
  [70] = {.lex_state = 4},
  [71] = {.lex_state = 8},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 4},
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
    [anon_sym_test] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_use] = ACTIONS(1),
    [anon_sym_dep] = ACTIONS(1),
    [anon_sym_source] = ACTIONS(1),
    [anon_sym_header] = ACTIONS(1),
    [anon_sym_include] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_endif] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym_identifier_expression_token1] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(64),
    [sym_variable] = STATE(3),
    [sym_include] = STATE(3),
    [sym_definition] = STATE(3),
    [sym_definition_type] = STATE(50),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_POUNDinclude] = ACTIONS(7),
    [anon_sym_workspace] = ACTIONS(9),
    [anon_sym_group] = ACTIONS(9),
    [anon_sym_con] = ACTIONS(9),
    [anon_sym_exe] = ACTIONS(9),
    [anon_sym_lib] = ACTIONS(9),
    [anon_sym_dll] = ACTIONS(9),
    [anon_sym_test] = ACTIONS(9),
    [sym_name] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    ACTIONS(15), 1,
      anon_sym_POUNDinclude,
    ACTIONS(21), 1,
      sym_name,
    STATE(50), 1,
      sym_definition_type,
    STATE(2), 4,
      sym_variable,
      sym_include,
      sym_definition,
      aux_sym_source_file_repeat1,
    ACTIONS(18), 7,
      anon_sym_workspace,
      anon_sym_group,
      anon_sym_con,
      anon_sym_exe,
      anon_sym_lib,
      anon_sym_dll,
      anon_sym_test,
  [31] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_POUNDinclude,
    ACTIONS(11), 1,
      sym_name,
    ACTIONS(24), 1,
      ts_builtin_sym_end,
    STATE(50), 1,
      sym_definition_type,
    STATE(2), 4,
      sym_variable,
      sym_include,
      sym_definition,
      aux_sym_source_file_repeat1,
    ACTIONS(9), 7,
      anon_sym_workspace,
      anon_sym_group,
      anon_sym_con,
      anon_sym_exe,
      anon_sym_lib,
      anon_sym_dll,
      anon_sym_test,
  [62] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(26), 1,
      anon_sym_AMP_AMP,
    ACTIONS(28), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(34), 1,
      anon_sym_if,
    ACTIONS(36), 1,
      anon_sym_endif,
    ACTIONS(30), 2,
      anon_sym_use,
      anon_sym_dep,
    ACTIONS(32), 3,
      anon_sym_source,
      anon_sym_header,
      anon_sym_include,
    STATE(9), 5,
      sym__statement,
      sym_use_statement,
      sym_file_statement,
      sym_if_statement,
      aux_sym_if_statement_repeat1,
  [94] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(38), 1,
      anon_sym_RBRACE,
    ACTIONS(46), 1,
      anon_sym_if,
    ACTIONS(49), 1,
      sym_name,
    ACTIONS(40), 2,
      anon_sym_use,
      anon_sym_dep,
    ACTIONS(43), 3,
      anon_sym_source,
      anon_sym_header,
      anon_sym_include,
    STATE(5), 6,
      sym_variable,
      sym__statement,
      sym_use_statement,
      sym_file_statement,
      sym_if_statement,
      aux_sym_block_repeat1,
  [124] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(26), 1,
      anon_sym_AMP_AMP,
    ACTIONS(28), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(34), 1,
      anon_sym_if,
    ACTIONS(52), 1,
      anon_sym_endif,
    ACTIONS(30), 2,
      anon_sym_use,
      anon_sym_dep,
    ACTIONS(32), 3,
      anon_sym_source,
      anon_sym_header,
      anon_sym_include,
    STATE(11), 5,
      sym__statement,
      sym_use_statement,
      sym_file_statement,
      sym_if_statement,
      aux_sym_if_statement_repeat1,
  [156] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(54), 1,
      anon_sym_RBRACE,
    ACTIONS(60), 1,
      anon_sym_if,
    ACTIONS(62), 1,
      sym_name,
    ACTIONS(56), 2,
      anon_sym_use,
      anon_sym_dep,
    ACTIONS(58), 3,
      anon_sym_source,
      anon_sym_header,
      anon_sym_include,
    STATE(8), 6,
      sym_variable,
      sym__statement,
      sym_use_statement,
      sym_file_statement,
      sym_if_statement,
      aux_sym_block_repeat1,
  [186] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(60), 1,
      anon_sym_if,
    ACTIONS(62), 1,
      sym_name,
    ACTIONS(64), 1,
      anon_sym_RBRACE,
    ACTIONS(56), 2,
      anon_sym_use,
      anon_sym_dep,
    ACTIONS(58), 3,
      anon_sym_source,
      anon_sym_header,
      anon_sym_include,
    STATE(5), 6,
      sym_variable,
      sym__statement,
      sym_use_statement,
      sym_file_statement,
      sym_if_statement,
      aux_sym_block_repeat1,
  [216] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(34), 1,
      anon_sym_if,
    ACTIONS(66), 1,
      anon_sym_endif,
    ACTIONS(30), 2,
      anon_sym_use,
      anon_sym_dep,
    ACTIONS(32), 3,
      anon_sym_source,
      anon_sym_header,
      anon_sym_include,
    STATE(10), 5,
      sym__statement,
      sym_use_statement,
      sym_file_statement,
      sym_if_statement,
      aux_sym_if_statement_repeat1,
  [242] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 1,
      anon_sym_if,
    ACTIONS(77), 1,
      anon_sym_endif,
    ACTIONS(68), 2,
      anon_sym_use,
      anon_sym_dep,
    ACTIONS(71), 3,
      anon_sym_source,
      anon_sym_header,
      anon_sym_include,
    STATE(10), 5,
      sym__statement,
      sym_use_statement,
      sym_file_statement,
      sym_if_statement,
      aux_sym_if_statement_repeat1,
  [268] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(34), 1,
      anon_sym_if,
    ACTIONS(79), 1,
      anon_sym_endif,
    ACTIONS(30), 2,
      anon_sym_use,
      anon_sym_dep,
    ACTIONS(32), 3,
      anon_sym_source,
      anon_sym_header,
      anon_sym_include,
    STATE(10), 5,
      sym__statement,
      sym_use_statement,
      sym_file_statement,
      sym_if_statement,
      aux_sym_if_statement_repeat1,
  [294] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 11,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_COMMA,
      anon_sym_use,
      anon_sym_dep,
      anon_sym_source,
      anon_sym_header,
      anon_sym_include,
      anon_sym_if,
      anon_sym_endif,
  [311] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 11,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_COMMA,
      anon_sym_use,
      anon_sym_dep,
      anon_sym_source,
      anon_sym_header,
      anon_sym_include,
      anon_sym_if,
      anon_sym_endif,
  [328] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(26), 1,
      anon_sym_AMP_AMP,
    ACTIONS(85), 10,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_COMMA,
      anon_sym_use,
      anon_sym_dep,
      anon_sym_source,
      anon_sym_header,
      anon_sym_include,
      anon_sym_if,
      anon_sym_endif,
  [347] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 11,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_COMMA,
      anon_sym_use,
      anon_sym_dep,
      anon_sym_source,
      anon_sym_header,
      anon_sym_include,
      anon_sym_if,
      anon_sym_endif,
  [364] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 11,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_COMMA,
      anon_sym_use,
      anon_sym_dep,
      anon_sym_source,
      anon_sym_header,
      anon_sym_include,
      anon_sym_if,
      anon_sym_endif,
  [381] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 2,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
    ACTIONS(91), 8,
      anon_sym_workspace,
      anon_sym_group,
      anon_sym_con,
      anon_sym_exe,
      anon_sym_lib,
      anon_sym_dll,
      anon_sym_test,
      sym_name,
  [399] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 2,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
    ACTIONS(95), 8,
      anon_sym_workspace,
      anon_sym_group,
      anon_sym_con,
      anon_sym_exe,
      anon_sym_lib,
      anon_sym_dll,
      anon_sym_test,
      sym_name,
  [417] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 2,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
    ACTIONS(99), 8,
      anon_sym_workspace,
      anon_sym_group,
      anon_sym_con,
      anon_sym_exe,
      anon_sym_lib,
      anon_sym_dll,
      anon_sym_test,
      sym_name,
  [435] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 2,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
    ACTIONS(103), 8,
      anon_sym_workspace,
      anon_sym_group,
      anon_sym_con,
      anon_sym_exe,
      anon_sym_lib,
      anon_sym_dll,
      anon_sym_test,
      sym_name,
  [453] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 2,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
    ACTIONS(107), 8,
      anon_sym_workspace,
      anon_sym_group,
      anon_sym_con,
      anon_sym_exe,
      anon_sym_lib,
      anon_sym_dll,
      anon_sym_test,
      sym_name,
  [471] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 2,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
    ACTIONS(111), 8,
      anon_sym_workspace,
      anon_sym_group,
      anon_sym_con,
      anon_sym_exe,
      anon_sym_lib,
      anon_sym_dll,
      anon_sym_test,
      sym_name,
  [489] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 2,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
    ACTIONS(115), 8,
      anon_sym_workspace,
      anon_sym_group,
      anon_sym_con,
      anon_sym_exe,
      anon_sym_lib,
      anon_sym_dll,
      anon_sym_test,
      sym_name,
  [507] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(119), 7,
      anon_sym_use,
      anon_sym_dep,
      anon_sym_source,
      anon_sym_header,
      anon_sym_include,
      anon_sym_if,
      sym_name,
  [524] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 1,
      anon_sym_BANG,
    ACTIONS(125), 1,
      aux_sym_identifier_expression_token1,
    STATE(65), 1,
      sym_comma_expression,
    STATE(52), 5,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_identifier_expression,
  [547] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 1,
      anon_sym_BANG,
    ACTIONS(125), 1,
      aux_sym_identifier_expression_token1,
    STATE(72), 1,
      sym_comma_expression,
    STATE(49), 5,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_identifier_expression,
  [570] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      anon_sym_RBRACE,
    ACTIONS(99), 7,
      anon_sym_use,
      anon_sym_dep,
      anon_sym_source,
      anon_sym_header,
      anon_sym_include,
      anon_sym_if,
      sym_name,
  [586] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 1,
      anon_sym_BANG,
    ACTIONS(125), 1,
      aux_sym_identifier_expression_token1,
    STATE(15), 5,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_identifier_expression,
  [606] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 1,
      anon_sym_BANG,
    ACTIONS(125), 1,
      aux_sym_identifier_expression_token1,
    STATE(14), 5,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_identifier_expression,
  [626] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 1,
      anon_sym_BANG,
    ACTIONS(125), 1,
      aux_sym_identifier_expression_token1,
    STATE(53), 5,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_identifier_expression,
  [646] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 1,
      anon_sym_BANG,
    ACTIONS(125), 1,
      aux_sym_identifier_expression_token1,
    STATE(6), 5,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_identifier_expression,
  [666] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 1,
      anon_sym_RBRACE,
    ACTIONS(129), 7,
      anon_sym_use,
      anon_sym_dep,
      anon_sym_source,
      anon_sym_header,
      anon_sym_include,
      anon_sym_if,
      sym_name,
  [682] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 1,
      anon_sym_BANG,
    ACTIONS(125), 1,
      aux_sym_identifier_expression_token1,
    STATE(13), 5,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_identifier_expression,
  [702] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_RBRACE,
    ACTIONS(133), 7,
      anon_sym_use,
      anon_sym_dep,
      anon_sym_source,
      anon_sym_header,
      anon_sym_include,
      anon_sym_if,
      sym_name,
  [718] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_RBRACE,
    ACTIONS(137), 7,
      anon_sym_use,
      anon_sym_dep,
      anon_sym_source,
      anon_sym_header,
      anon_sym_include,
      anon_sym_if,
      sym_name,
  [734] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      anon_sym_RBRACE,
    ACTIONS(141), 7,
      anon_sym_use,
      anon_sym_dep,
      anon_sym_source,
      anon_sym_header,
      anon_sym_include,
      anon_sym_if,
      sym_name,
  [750] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      anon_sym_RBRACE,
    ACTIONS(145), 7,
      anon_sym_use,
      anon_sym_dep,
      anon_sym_source,
      anon_sym_header,
      anon_sym_include,
      anon_sym_if,
      sym_name,
  [766] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 1,
      anon_sym_BANG,
    ACTIONS(125), 1,
      aux_sym_identifier_expression_token1,
    STATE(55), 5,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_identifier_expression,
  [786] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 1,
      anon_sym_BANG,
    ACTIONS(125), 1,
      aux_sym_identifier_expression_token1,
    STATE(4), 5,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_identifier_expression,
  [806] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      anon_sym_RBRACE,
    ACTIONS(149), 7,
      anon_sym_use,
      anon_sym_dep,
      anon_sym_source,
      anon_sym_header,
      anon_sym_include,
      anon_sym_if,
      sym_name,
  [822] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 7,
      anon_sym_use,
      anon_sym_dep,
      anon_sym_source,
      anon_sym_header,
      anon_sym_include,
      anon_sym_if,
      anon_sym_endif,
  [835] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 7,
      anon_sym_use,
      anon_sym_dep,
      anon_sym_source,
      anon_sym_header,
      anon_sym_include,
      anon_sym_if,
      anon_sym_endif,
  [848] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 7,
      anon_sym_use,
      anon_sym_dep,
      anon_sym_source,
      anon_sym_header,
      anon_sym_include,
      anon_sym_if,
      anon_sym_endif,
  [861] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 7,
      anon_sym_use,
      anon_sym_dep,
      anon_sym_source,
      anon_sym_header,
      anon_sym_include,
      anon_sym_if,
      anon_sym_endif,
  [874] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 7,
      anon_sym_use,
      anon_sym_dep,
      anon_sym_source,
      anon_sym_header,
      anon_sym_include,
      anon_sym_if,
      anon_sym_endif,
  [887] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 7,
      anon_sym_use,
      anon_sym_dep,
      anon_sym_source,
      anon_sym_header,
      anon_sym_include,
      anon_sym_if,
      anon_sym_endif,
  [900] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 7,
      anon_sym_use,
      anon_sym_dep,
      anon_sym_source,
      anon_sym_header,
      anon_sym_include,
      anon_sym_if,
      anon_sym_endif,
  [913] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    ACTIONS(153), 1,
      aux_sym_identifier_token1,
    STATE(42), 1,
      sym_identifier,
    STATE(62), 1,
      sym__conditional,
  [929] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(26), 1,
      anon_sym_AMP_AMP,
    ACTIONS(28), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(155), 1,
      anon_sym_RPAREN,
    ACTIONS(157), 1,
      anon_sym_COMMA,
  [945] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    ACTIONS(159), 1,
      aux_sym_identifier_token1,
    STATE(57), 1,
      sym_identifier,
    STATE(58), 1,
      sym__conditional,
  [961] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    ACTIONS(159), 1,
      aux_sym_identifier_token1,
    STATE(35), 1,
      sym_identifier,
    STATE(60), 1,
      sym__conditional,
  [977] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(26), 1,
      anon_sym_AMP_AMP,
    ACTIONS(28), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(157), 1,
      anon_sym_COMMA,
    ACTIONS(161), 1,
      anon_sym_RPAREN,
  [993] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(26), 1,
      anon_sym_AMP_AMP,
    ACTIONS(28), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(163), 1,
      anon_sym_RPAREN,
  [1006] = 4,
    ACTIONS(165), 1,
      anon_sym_LPAREN,
    ACTIONS(167), 1,
      sym_file_path,
    ACTIONS(169), 1,
      sym_comment,
    STATE(70), 1,
      sym__conditional,
  [1019] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(26), 1,
      anon_sym_AMP_AMP,
    ACTIONS(28), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(171), 1,
      anon_sym_RPAREN,
  [1032] = 4,
    ACTIONS(165), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(173), 1,
      sym_file_path,
    STATE(74), 1,
      sym__conditional,
  [1045] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      anon_sym_LBRACE,
    STATE(21), 1,
      sym_block,
  [1055] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      aux_sym_identifier_token1,
    STATE(63), 1,
      sym_identifier,
  [1065] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 2,
      anon_sym_LPAREN,
      aux_sym_identifier_token1,
  [1073] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      aux_sym_identifier_token1,
    STATE(40), 1,
      sym_identifier,
  [1083] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    STATE(18), 1,
      sym_string_literal,
  [1093] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      aux_sym_identifier_token1,
    STATE(43), 1,
      sym_identifier,
  [1103] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      anon_sym_LBRACE,
    STATE(23), 1,
      sym_block,
  [1113] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      ts_builtin_sym_end,
  [1120] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_RPAREN,
  [1127] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      aux_sym_identifier_token1,
  [1134] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      sym_value,
  [1141] = 2,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(187), 1,
      aux_sym_string_literal_token1,
  [1148] = 2,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(189), 1,
      sym_file_path,
  [1155] = 2,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(191), 1,
      sym_file_path,
  [1162] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      sym_value,
  [1169] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_RPAREN,
  [1176] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      anon_sym_DQUOTE,
  [1183] = 2,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(197), 1,
      sym_file_path,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 31,
  [SMALL_STATE(4)] = 62,
  [SMALL_STATE(5)] = 94,
  [SMALL_STATE(6)] = 124,
  [SMALL_STATE(7)] = 156,
  [SMALL_STATE(8)] = 186,
  [SMALL_STATE(9)] = 216,
  [SMALL_STATE(10)] = 242,
  [SMALL_STATE(11)] = 268,
  [SMALL_STATE(12)] = 294,
  [SMALL_STATE(13)] = 311,
  [SMALL_STATE(14)] = 328,
  [SMALL_STATE(15)] = 347,
  [SMALL_STATE(16)] = 364,
  [SMALL_STATE(17)] = 381,
  [SMALL_STATE(18)] = 399,
  [SMALL_STATE(19)] = 417,
  [SMALL_STATE(20)] = 435,
  [SMALL_STATE(21)] = 453,
  [SMALL_STATE(22)] = 471,
  [SMALL_STATE(23)] = 489,
  [SMALL_STATE(24)] = 507,
  [SMALL_STATE(25)] = 524,
  [SMALL_STATE(26)] = 547,
  [SMALL_STATE(27)] = 570,
  [SMALL_STATE(28)] = 586,
  [SMALL_STATE(29)] = 606,
  [SMALL_STATE(30)] = 626,
  [SMALL_STATE(31)] = 646,
  [SMALL_STATE(32)] = 666,
  [SMALL_STATE(33)] = 682,
  [SMALL_STATE(34)] = 702,
  [SMALL_STATE(35)] = 718,
  [SMALL_STATE(36)] = 734,
  [SMALL_STATE(37)] = 750,
  [SMALL_STATE(38)] = 766,
  [SMALL_STATE(39)] = 786,
  [SMALL_STATE(40)] = 806,
  [SMALL_STATE(41)] = 822,
  [SMALL_STATE(42)] = 835,
  [SMALL_STATE(43)] = 848,
  [SMALL_STATE(44)] = 861,
  [SMALL_STATE(45)] = 874,
  [SMALL_STATE(46)] = 887,
  [SMALL_STATE(47)] = 900,
  [SMALL_STATE(48)] = 913,
  [SMALL_STATE(49)] = 929,
  [SMALL_STATE(50)] = 945,
  [SMALL_STATE(51)] = 961,
  [SMALL_STATE(52)] = 977,
  [SMALL_STATE(53)] = 993,
  [SMALL_STATE(54)] = 1006,
  [SMALL_STATE(55)] = 1019,
  [SMALL_STATE(56)] = 1032,
  [SMALL_STATE(57)] = 1045,
  [SMALL_STATE(58)] = 1055,
  [SMALL_STATE(59)] = 1065,
  [SMALL_STATE(60)] = 1073,
  [SMALL_STATE(61)] = 1083,
  [SMALL_STATE(62)] = 1093,
  [SMALL_STATE(63)] = 1103,
  [SMALL_STATE(64)] = 1113,
  [SMALL_STATE(65)] = 1120,
  [SMALL_STATE(66)] = 1127,
  [SMALL_STATE(67)] = 1134,
  [SMALL_STATE(68)] = 1141,
  [SMALL_STATE(69)] = 1148,
  [SMALL_STATE(70)] = 1155,
  [SMALL_STATE(71)] = 1162,
  [SMALL_STATE(72)] = 1169,
  [SMALL_STATE(73)] = 1176,
  [SMALL_STATE(74)] = 1183,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(61),
  [18] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(59),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(71),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(51),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(56),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(31),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(67),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 2), SHIFT_REPEAT(48),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 2), SHIFT_REPEAT(54),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 2), SHIFT_REPEAT(39),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 2),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier_expression, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 2),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include, 2),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 2),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 2),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 3),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_definition, 3),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 4),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_definition, 4),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_statement, 3),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_statement, 3),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 4),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 4),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_statement, 2),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_use_statement, 2),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_statement, 2),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_statement, 2),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 3),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 3),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_statement, 3),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_use_statement, 3),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comma_expression, 3),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition_type, 1),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [181] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__conditional, 3),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__conditional, 3),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
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
