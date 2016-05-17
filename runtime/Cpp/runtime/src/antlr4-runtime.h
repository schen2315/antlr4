/*
 * [The "BSD license"]
 *  Copyright (c) 2016 Mike Lischke
 *  All rights reserved.
 *
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions
 *  are met:
 *
 *  1. Redistributions of source code must retain the above copyright
 *     notice, this list of conditions and the following disclaimer.
 *  2. Redistributions in binary form must reproduce the above copyright
 *     notice, this list of conditions and the following disclaimer in the
 *     documentation and/or other materials provided with the distribution.
 *  3. The name of the author may not be used to endorse or promote products
 *     derived from this software without specific prior written permission.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
 *  IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
 *  OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 *  IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
 *  INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
 *  NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 *  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 *  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 *  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
 *  THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#pragma once

// This is the umbrella header for all ANTLR4 C++ runtime headers.

#include "antlr4-common.h"

#include "ANTLRErrorListener.h"
#include "ANTLRErrorStrategy.h"
#include "ANTLRFileStream.h"
#include "ANTLRInputStream.h"
#include "BailErrorStrategy.h"
#include "BaseErrorListener.h"
#include "BufferedTokenStream.h"
#include "CharStream.h"
#include "CommonToken.h"
#include "CommonTokenFactory.h"
#include "CommonTokenStream.h"
#include "ConsoleErrorListener.h"
#include "DefaultErrorStrategy.h"
#include "DiagnosticErrorListener.h"
#include "Exceptions.h"
#include "FailedPredicateException.h"
#include "IRecognizer.h"
#include "InputMismatchException.h"
#include "IntStream.h"
#include "InterpreterRuleContext.h"
#include "Lexer.h"
#include "LexerInterpreter.h"
#include "LexerNoViableAltException.h"
#include "ListTokenSource.h"
#include "NoViableAltException.h"
#include "Parser.h"
#include "ParserInterpreter.h"
#include "ParserRuleContext.h"
#include "ProxyErrorListener.h"
#include "RecognitionException.h"
#include "Recognizer.h"
#include "RuleContext.h"
#include "RuleContextWithAltNum.h"
#include "RuntimeMetaData.h"
#include "Token.h"
#include "TokenFactory.h"
#include "TokenSource.h"
#include "TokenStream.h"
#include "TokenStreamRewriter.h"
#include "UnbufferedCharStream.h"
#include "UnbufferedTokenStream.h"
#include "Vocabulary.h"
#include "VocabularyImpl.h"
#include "WritableToken.h"
#include "atn/ATN.h"
#include "atn/ATNConfig.h"
#include "atn/ATNConfigSet.h"
#include "atn/ATNDeserializationOptions.h"
#include "atn/ATNDeserializer.h"
#include "atn/ATNSerializer.h"
#include "atn/ATNSimulator.h"
#include "atn/ATNState.h"
#include "atn/ATNType.h"
#include "atn/AbstractPredicateTransition.h"
#include "atn/ActionTransition.h"
#include "atn/AmbiguityInfo.h"
#include "atn/ArrayPredictionContext.h"
#include "atn/AtomTransition.h"
#include "atn/BasicBlockStartState.h"
#include "atn/BasicState.h"
#include "atn/BlockEndState.h"
#include "atn/BlockStartState.h"
#include "atn/ConfigLookup.h"
#include "atn/ContextSensitivityInfo.h"
#include "atn/DecisionEventInfo.h"
#include "atn/DecisionInfo.h"
#include "atn/DecisionState.h"
#include "atn/EmptyPredictionContext.h"
#include "atn/EpsilonTransition.h"
#include "atn/ErrorInfo.h"
#include "atn/LL1Analyzer.h"
#include "atn/LexerATNConfig.h"
#include "atn/LexerATNSimulator.h"
#include "atn/LexerAction.h"
#include "atn/LexerActionExecutor.h"
#include "atn/LexerActionType.h"
#include "atn/LexerChannelAction.h"
#include "atn/LexerCustomAction.h"
#include "atn/LexerIndexedCustomAction.h"
#include "atn/LexerModeAction.h"
#include "atn/LexerMoreAction.h"
#include "atn/LexerPopModeAction.h"
#include "atn/LexerPushModeAction.h"
#include "atn/LexerSkipAction.h"
#include "atn/LexerTypeAction.h"
#include "atn/LookaheadEventInfo.h"
#include "atn/LoopEndState.h"
#include "atn/NotSetTransition.h"
#include "atn/OrderedATNConfigSet.h"
#include "atn/ParseInfo.h"
#include "atn/ParserATNSimulator.h"
#include "atn/PlusBlockStartState.h"
#include "atn/PlusLoopbackState.h"
#include "atn/PrecedencePredicateTransition.h"
#include "atn/PredicateEvalInfo.h"
#include "atn/PredicateTransition.h"
#include "atn/PredictionContext.h"
#include "atn/PredictionMode.h"
#include "atn/ProfilingATNSimulator.h"
#include "atn/RangeTransition.h"
#include "atn/RuleStartState.h"
#include "atn/RuleStopState.h"
#include "atn/RuleTransition.h"
#include "atn/SemanticContext.h"
#include "atn/SetTransition.h"
#include "atn/SingletonPredictionContext.h"
#include "atn/StarBlockStartState.h"
#include "atn/StarLoopEntryState.h"
#include "atn/StarLoopbackState.h"
#include "atn/TokensStartState.h"
#include "atn/Transition.h"
#include "atn/WildcardTransition.h"
#include "dfa/DFA.h"
#include "dfa/DFASerializer.h"
#include "dfa/DFAState.h"
#include "dfa/LexerDFASerializer.h"
#include "misc/Interval.h"
#include "misc/IntervalSet.h"
#include "misc/MurmurHash.h"
#include "misc/Predicate.h"
#include "misc/TestRig.h"
#include "support/Arrays.h"
#include "support/BitSet.h"
#include "support/CPPUtils.h"
#include "support/StringUtils.h"
#include "support/guid.h"
#include "tree/AbstractParseTreeVisitor.h"
#include "tree/ErrorNode.h"
#include "tree/ErrorNodeImpl.h"
#include "tree/ParseTree.h"
#include "tree/ParseTreeListener.h"
#include "tree/ParseTreeProperty.h"
#include "tree/ParseTreeVisitor.h"
#include "tree/ParseTreeWalker.h"
#include "tree/RuleNode.h"
#include "tree/SyntaxTree.h"
#include "tree/TerminalNode.h"
#include "tree/TerminalNodeImpl.h"
#include "tree/Tree.h"
#include "tree/Trees.h"
#include "tree/pattern/Chunk.h"
#include "tree/pattern/ParseTreeMatch.h"
#include "tree/pattern/ParseTreePattern.h"
#include "tree/pattern/ParseTreePatternMatcher.h"
#include "tree/pattern/RuleTagToken.h"
#include "tree/pattern/TagChunk.h"
#include "tree/pattern/TextChunk.h"
#include "tree/pattern/TokenTagToken.h"
#include "tree/xpath/XPathLexer.h"
